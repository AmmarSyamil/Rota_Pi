#include <Adafruit_TinyUSB.h>

uint8_t const desc[] = { TUD_HID_REPORT_DESC_GAMEPAD() };

Adafruit_USBD_HID usb_hid(desc, sizeof(desc), HID_ITF_PROTOCOL_NONE);

typedef struct {
  uint8_t buttons;
  uint8_t r_encoder;
  uint8_t r_buttons;
  int16_t wheel;      
  int16_t throttle; 
  int16_t brake;
} GamepadReport;


//buttons
struct Button {
  uint8_t pin;
  uint8_t bitIndex;
  bool lastState;
  uint32_t lastTime;
};
Button buttons[] = {
  {4, 0, false, 0},  // 
  {5, 1, false, 0},  // Button 1
};
const int numButtons = sizeof(buttons) / sizeof(buttons[0]);


GamepadReport report;

// ROTARY potentiometer

#define PIN_CLK 2
#define PIN_DT  3

int gear = 1;
int lastClk = HIGH;
int rotationCount = 0;
const int threshold = 4;
//end


void setup() {
  
  //r potentiometer
  pinMode(PIN_CLK, INPUT_PULLUP);
  pinMode(PIN_DT, INPUT_PULLUP);
  //end
  usb_hid.begin();

  //buttons setup
  for (int i = 0; i < numButtons; i++) {
    pinMode(buttons[i].pin, INPUT_PULLUP);
  }

  Serial.begin(115200);

  TinyUSBDevice.detach();
  delay(10);
  TinyUSBDevice.attach();


}

void loop() {
  if (!usb_hid.ready()) return;

  // buttons
  for (int i = 0; i < numButtons; i++) {
    handleButton(buttons[i]);
  }


  usb_hid.sendReport(0, &report, sizeof(report));
  delay(10);
}

void loop_hall_sensor() {
  // SS49E HALL SENSOR  
  int raw = analogRead(GPIO26);         // 0–4095 (12-bit)
  float percent = raw / 4095.0 * 100;   // Convert to % 
  int16_t hidValue = map(raw, 0, 4095, 0, 32767);
  report.throttle = hidValue; // in our HID struct

}

void loop_r_potentiometer() {
}

void handleButton(Button &btn) {
  bool pressed = !digitalRead(btn.pin);  // active LOW
  uint32_t now = millis();

  if (pressed != btn.lastState && (now - btn.lastTime > 50)) {
    btn.lastTime = now;
    btn.lastState = pressed;

    if (pressed) {
      report.buttons |= (1 << btn.bitIndex);  // set bit ON
    } else {
      report.buttons &= ~(1 << btn.bitIndex); // set bit OFF
    }

    sendReport();  // trigger HID send
  }
}

// Handle rotary encoder input
// This function will be called in the main loop to handle rotary encoder input
void loop_r_encoder() {
  int currentClk = digitalRead(PIN_CLK);
  if (currentClk != lastClk && currentClk == LOW) {
    int dtVal = digitalRead(PIN_DT);
    
    if (dtVal != currentClk) {
      rotationCount++;  // Clockwise → Gear Up
    } else {
      rotationCount--;  // Counter-Clockwise → Gear Down
    }

    if (rotationCount >= threshold) {
      report.buttons = (1 << 1);  // Button 1 = Gear Up
      sendReport();
      rotationCount = 0;
    }
    else if (rotationCount <= -threshold) {
      report.buttons = (1 << 0);  // Button 0 = Gear Down
      sendReport();
      rotationCount = 0;
    }
  }
  lastClk = currentClk;
  delay(1);
}

void sendReport() {
  if (usb_hid.ready()) {
    usb_hid.sendReport(0, &report, sizeof(report)); // press
    delay(20); // simulate short press
    report.buttons = 0;
    usb_hid.sendReport(0, &report, sizeof(report)); // release
  }
}