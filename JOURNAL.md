---
title: "Rota_Pi"
author: "Ammar Syamil"
description: "A DIY racing steering wheel built with a Raspberry Pi Pico USB-C module. It features 2 Magnetic hall button for variable throttle and brake control, gear shift buttons, and a rotary potensiometer for steering detection. Designed to work as a plug-and-play USB HID game controller for PC racing games and other wihtout the need of extra steering pads."
created_at: "2025-02-06"
---

# June 3th: Finish the first version schematics for the PCB!!

I started the project by making the schematics first via KiCAD, a free open sources CAD editor for broke guy like me. I planning to use Pico because i dont know why, I already made some project using ESP nor Arduino so that why i want to step into the red side. The first problem I encountered is that the joystick need 4 ACD or analog pin while the Pico only had 3, so i use a module named ADS1115 that combine 4 analog pin into I2C that could be used in the Pico. Oh well, this is my first time building PCB so i hope its not going to explode anytime soon

![alt text](image/image.png)
hmm i hope it could be seen!


**Total time spent: 3H**


# June 11th: Welp, Change alot

Before I started the documentation, I just wanna say that lately im very busy, so i just like use like 20 to 30 minute a day for this project and I documented when its big cahnges.

Ok the first change to this project is that the begining plan is to use 2 jostick for throttle and brake, but i found it wierd and hard to control so i changed to hall sensor using button with spring. The other changes is the use of rotary potentiometer instead of fanct AS5600 magnetic anglular sensor, because It require 2 PCBs for the AS5600 to work properly in this project cases.

So yeah, i Got alot works on the KICAD stuff. But its roughly looks like this:
![alt text](image/image-1.png)
I'll ask for recomendation and further tuning in teh Slack or other group. But for now its fine adn I already test teh ERC or Electrical Ruler Checker built in on KiCad. The next problem is to find the proper footprint for this schematics, Because i coulndt find the module that i intended too, it just far off.

**Total time spent: 3H**


# June 19th: PCB togo!!!

To start with, I change a bit off the way to control the trottle and braking system, instead of using thumb conroled linear sensor via hall sensor magnet, i use like angular like spring place behind the wheel instead, so the breaking and throttle more like how supercar change its gear (placement).

One of the hardest thing is to find the right footprint fot this pproject, and this is one of a big task. But i cahnge that idea to instead used wire pin on the PCB, so i can just use the wire to connect the component. Othertahn to cut cost its also bbecause im still preatty unsure where to put the stuff (eg. button, rotary stuff, exc). So I got going, make the PCB stuf on Kicad, get wiring, placement, and other. Until i met a problem, theres error that one part of the board cant get the GND pin (note: i set the pad to be gnd) becaise its isolated by the copper wire, i need to tweek really hard and rerouting the wire so that, all area is connected to the rest of the area. I forget to picture at that problem but hey heres the fixed version:
![alt text](image/image-2.png)

Also I had a few time left adn i used that to find the datasheet, dimesion, and other info of the thing i want to use so that it fit perfectly fine. I start by searching free 3D model in GrabCAD adn thankfully, i found all of the thing i needed. I also list what i need to buy for this project likee this:
![alt text](image/4.png)

In the next part i want to start 3D designing. hope itll be fun!


**Total time spent: 3H**