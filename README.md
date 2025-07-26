![3D Print Front](image/18.png)  

# ROTA_Pi

**ROTA_Pi** is a custom built sim race steering wheel powered by a **Raspberry Pi Pico**, designed for usability and ease of setup.  
It features all peripheral that is needed in sim racing (DRS, ADS, change gears, POV shift, and much more) and the additional paddle behind the wheel for both the throttle and braking without the need of external pads for it.

This project combines embedded hardware, custom 3D design, and custom styling all built from the ground up using custom PCBs, sensors system, and a 3D-printed enclosure modeled in **FreeCAD**.  
I also plan to add BMW M series badge at the middle of the wheel for accessories (not the real one of course and it isn’t there on the model yet). It connected via a USB-C to USB-B.

---

## Background

Lately, I started into cars stuff and that’s make me wanna play car game, like F1 25, Assetto Corsa, or even Forza Horizon.  
But my money is already used for buying laptop (duhh) so I couldn’t afford to buy dedicated race sim.  

Other than that, I also want a simple race sim without lots of setup and place taken. Because of that, I made this project that target usability.

I used pinhole in the PCB instead of direct of it, because it is easier to repair and fine tune.  
Also I print the PCB in my local shop because there’s MoQ JLCPCB and my PCB isn’t complex.

![PCB Image](image/16.png)  
![PCB Rear](image/19png)

For the 3D model, I printed in **Filamen.com** of Indonesia, because there’s no #print-legion in Indonesia.

![3D Print Front](image/18.png)  
![3D Print Rear](image/17.png)

For the other parts I ordered from **Tokopedia** (an online marketplace in Indonesia), because Temu and Aliexpress can’t send to Indonesia.  
You can search the BOM for the total bill.

---

## 🔧 Specs

**Main process device:**  
- Raspberry Pi Pico (RP2040)

**Peripheral:**  
- Button: R13-507  
- Rotary Potentiometer: 10K ohm version  
- Rotary Encoder: EC-11  
- Hall sensor: SS49E  

**Other:**  
- Magnet: Neodymium 8x3mm  
- Display: 0.91" 128x32 OLED display  
- Power and data cable: Vention USB-C to USB-B

---

## Credits & Attribution

**Clamp model made by:** Studio Space Dust from Printables website  
- Webs: https://www.printables.com/model/730655-c-clamp-with-swappable-clamp-ends/files  
- License: Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0)  
  http://creativecommons.org/licenses/by-nc-sa/4.0/


## BOM
| #  | Name                        | Unit Price (IDR) | Quantity | Total Price (IDR) | Total Price (USD) | [Tokopedia Link](https://www.tokopedia.com/)                                                                                                               | From        |
|----|-----------------------------|------------------|----------|-------------------|--------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------|-------------|
| 1  | Rasp Pico                   | Rp65,000         | 1        | Rp65,000          | $3.96              | [Link](https://www.tokopedia.com/cncstorebandung/raspberry-pi-pico-rp2040-rp-2040-arm-micropython-standard-2mb-1730916096964527757)                       | Tokopedia   |
| 2  | Tactile button              | Rp2,755          | 8        | Rp22,040          | $1.34              | [Link](https://www.tokopedia.com/cncstorebandung/push-button-16mm-tombol-reset-push-on-switch-momentary-round-bulat-red)                                  | Tokopedia   |
| 3  | Wire                        | Rp2,850          | 3        | Rp8,550           | $0.52              | [Link](https://www.tokopedia.com/cncstorebandung/kabel-tunggal-mini-wire-single-core-tinned-cu-permeter-hitam-merah-hijau-kuning-putih-0-5mm-hijau-3e8a6) | Tokopedia   |
| 4  | Hall sensor (SS493)        | Rp1,805          | 2        | Rp3,610           | $0.22              | [Link](https://www.tokopedia.com/jogjarobotika/ss49e-linear-hall-sensor-hall-effect-sensor-49e-hall-element)                                              | Tokopedia   |
| 5  | Rotary potentiometer       | Rp2,375          | 1        | Rp2,375           | $0.14              | [Link](https://www.tokopedia.com/cncstorebandung/potentiometer-potensiometer-10k-10kohm-linier-taper-rotary)                                              | Tokopedia   |
| 6  | Display                    | Rp20,900         | 1        | Rp20,900          | $1.27              | [Link](https://www.tokopedia.com/cncstorebandung/oled-display-0-91-inch-128x32-lcd-screen-blue)                                                            | Tokopedia   |
| 7  | Rotary encoder (d shaft)   | Rp6,175          | 3        | Rp18,525          | $1.13              | [Link](https://www.tokopedia.com/jogjarobotika/ec11-rotary-encoder-potentiometer-length-20mm-diameter-6mm-1731778500515169755)                            | Tokopedia   |
| 8  | Magnet                     | Rp16,360         | 1        | Rp16,360          | $1.00              | [Link](https://www.tokopedia.com/tristarteknik/magnet-neodymium-bulat-8x3-mm-8x3mm-8mmx3mm-8-3mm-8-3-8mm-x-3mm-koin)                                      | Tokopedia   |
| 9  | Spring                     | Rp1,425          | 2        | Rp2,850           | $0.17              | [Link](https://www.tokopedia.com/jogjarobotika/timing-belt-locking-torsion-spring-2gt-3d-printer)                                                         | Tokopedia   |
| 10 | Cable                      | Rp49,000         | 1        | Rp49,000          | $2.99              | [Link](https://www.tokopedia.com/cxshopofficial/vention-kabel-usb-type-c-to-micro-b-data-male-to-male-android-charging-1730505205068105553)              | Tokopedia   |
| 11 | Glue                       | Rp20,900         | 1        | Rp20,900          | $1.27              | [Link](https://www.tokopedia.com/importirmainan/kafuter-704-rtv-silicone-electronic-sealant-glue-ft009-ft012-k949-l969)                                   | Tokopedia   |
| 12 | Solder                     | Rp142,100        | 1        | Rp142,100         | $8.67              | [Link](https://www.tokopedia.com/housesparepart/ezren-ez-936d-new-80w-soldering-iron-digital-adjustment-suhu-on-off/review)                               | Tokopedia   |
| 13 | Timah solder               | Rp21,850         | 1        | Rp21,850          | $1.33              | [Link](https://www.tokopedia.com/solidjayaelektro/timah-tenol-paragon-10m-tinol-patri-kawat-solder-wire-10-meter-asli)                                    | Tokopedia   |
| 14 | Heat shrink tube           | Rp1,330          | 1        | Rp1,330           | $0.08              | [Link](https://www.tokopedia.com/cncstorebandung/heatshrink-1-5mm-heat-shrink-selang-bakar-selongsong-bakar-tubing)                                       | Tokopedia   |
| 15 | Heat gun                   | Rp48,260         | 1        | Rp48,260          | $2.94              | [Link](https://www.tokopedia.com/anekatool/qst-express-heat-gun-electric-hot-air-vinyl-220v-300w-hitam)                                                   | Tokopedia   |
| 16 | BMW m series badge         | Rp19,000         | 1        | Rp19,000          | $1.16              | [Link](https://www.tokopedia.com/autoled23/stiker-3d-badge-emblem-bmw-stiker-variasi-emblem-bmw-a00151)                                                    | Tokopedia   |
| 17 | Pin header                 | Rp855            | 2        | Rp1,710           | $0.10              | [Link](https://www.tokopedia.com/cncstorebandung/cnc-pin-header-male-strip-single-row-1x40-254mm-yellow-kuning)                                           | Tokopedia   |
| 18 | m3 + nut washer (main case)| Rp22,610         | 8        | Rp180,880         | $11.02             | [Link](https://www.tokopedia.com/juraganperkakas/paket-3-set-jp-m-3x45-baut-mur-ring-plat-m-3-x-45-mur-m3-isi-100-pcs)                                     | Tokopedia   |
| 19 | m2 10mm (paddle)           | Rp2,610          | 2        | Rp5,220           | $0.32              | [Link](https://www.tokopedia.com/werno-werno/baut-jp-m2x10-stainless-304-phillips-head-m2-10-sekrup-2mm-x-10mm)                                            | Tokopedia   |
| 20 | m2 20mm (handle middle thumb)| Rp3,325        | 2        | Rp6,650           | $0.41              | [Link](https://www.tokopedia.com/werno-werno/baut-jp-m2x20-stainless-304-phillips-head-plus-m2-20-sekrup-2mm-x-20mm)                                      | Tokopedia   |
| 21 | washer m2                  | Rp190            | 4        | Rp760             | $0.05              | [Link](https://www.tokopedia.com/hirahana/ring-m2-din125-flat-washer)                                                                                      | Tokopedia   |
| 22 | nut m2                     | Rp950            | 4        | Rp3,800           | $0.23              | [Link](https://www.tokopedia.com/werno-werno/stainless-lock-nut-m2-nylon-insert-ss304-mur-hex-2mm-din985-steel)                                           | Tokopedia   |
| 23 | 3D printing                | Rp594,400        | 1        | Rp594,400         | $36.24             | —                                                                                                                                                          | Filamen.com |
| 24 | PCB+delivery               | Rp109,500        | 1        | Rp109,500         | $6.67              | —                                                                                                                                                          | SpectraPCB  |
| 25 | Deliver tokopedia cost     | Rp116,100        | 1        | Rp116,100         | $7.08              | —                                                                                                                                                          |             |
|    | **Total**                  |                  |          | **Rp1,785,225**   | **$108.80**        |                                                                                                                                                            |             |

