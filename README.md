ROTA_Pi a custom built sim race steering wheel powered by a **Raspberry Pi Pico**, designed for usability and ease of setup. It features all peripheral that is needed in sim racing (DRS, ADS, change gears, POV shift, and much more) and the additional paddle behind the wheel for both the throttle and braking without the need of external pads for it.

This project combine embedded hardware, custom 3D design, and custom styling all built from the ground up using custom PCBs, sensors system, and a 3D-printed enclosure modeled in **FreeCAD**. I also plan to add BMW M series badge at the middle of the wheel for accesories (not the real one of course and it isnt there on the model yet). It connected via a usb-c to usb-b.

Background:

Lately, I started into cars stuff and thats make me wanna play Car game, like F1 25, Asseto Corsa, or even Forza Horizon. But my money is already used for buying laptop (duhh) so i coulndt aford to buy dedicated race sim. Other than that, I also want a simple race sim without lots of setup and place taken. Because of that, i made this project that target usability.

I used pinhole in the PCB instead of direct of it, because it is easier to repair and fine tune. Also i print the PCB in my local shop because theres MoQ JLCPCB and my PCB isnt complex.
![alt text](image.png)
![alt text](image-3.png)

For the 3D model, i printed in Filamen.com of Indonesia, because theres no #print-legion in Indonesia.
![alt text](image-2.png)
![alt text](image-1.png)

For the other parts i ordered from Tokopedia (a online marketplace in Indonesia), becaus Temu and Aliexpress cant send to Indonesia. You can search the BOM for the total bill.

Specs:
1. Main process device: **Raspberry Pi Pico** (RP2040)
2. Peripheral: 
    - Button: R13-507
    - Rotary Potentiometer: 10K ohm version
    - Rotary Encoder: EC-11
    - Hall sensor: SS49E
3. Magnet: Neudymium 8x3mm
4. Display: 0.91" 128x32 OLED display
5. Power and data cable: Vention usb-C to usb-B


Credits & Attribution:

1. Clamp model made by Studio Space Dust from Printables website
- Webs: https://www.printables.com/model/730655-c-clamp-with-swappable-clamp-ends/files
- Licensce: Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0) http://creativecommons.org/licenses/by-nc-sa/4.0/
