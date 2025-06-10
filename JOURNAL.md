---
title: "Rota_Pi"
author: "Ammar Syamil"
description: "A DIY racing steering wheel built with a Raspberry Pi Pico USB-C module. It features 2 Magnetic hall button for variable throttle and brake control, gear shift buttons, and a rotary potensiometer for steering detection. Designed to work as a plug-and-play USB HID game controller for PC racing games and other wihtout the need of extra steering pads."
created_at: "2025-02-06"
---

# June 3th: Finish the first version schematics for the PCB!!

I started the project by making the schematics first via KiCAD, a free open sources CAD editor for broke guy like me. I planning to use Pico because i dont know why, I already made some project using ESP nor Arduino so that why i want to step into the red side. The first problem I encountered is that the joystick need 4 ACD or analog pin while the Pico only had 3, so i use a module named ADS1115 that combine 4 analog pin into I2C that could be used in the Pico. Oh well, this is my first time building PCB so i hope its not going to explode anytime soon

![alt text](image.png)
hmm i hope it could be seen!


**Total time spent: 3H**


# June 11th: Welp, Change alot

Before I started the documentation, I just wanna say that lately im very busy, so i just like use like 20 to 30 minute a day for this project and I documented when its big cahnges.

Ok the first change to this project is that the begining plan is to use 2 jostick for throttle and brake, but i found it wierd and hard to control so i changed to hall sensor using button with spring. The other changes is the use of rotary potentiometer instead of fanct AS5600 magnetic anglular sensor, because It require 2 PCBs for the AS5600 to work properly in this project cases.

So yeah, i Got alot works on the KICAD stuff. But its roughly looks like this:
![alt text](image-1.png)
I'll ask for recomendation and further tuning in teh Slack or other group. But for now its fine adn I already test teh ERC or Electrical Ruler Checker built in on KiCad. The next problem is to find the proper footprint for this schematics, Because i coulndt find the module that i intended too, it just far off.

**Total time spent: 3H**