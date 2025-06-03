---
title: "Rota_Pi"
author: "Ammar Syamil"
description: "A DIY racing steering wheel built with a Raspberry Pi Pico USB-C module. It features 2 joystick for variable throttle and brake control, gear shift buttons, and a magnetic encoder for precise steering detection. Designed to work as a plug-and-play USB HID game controller for PC racing games and other wihtout the need of extra steering pads."
created_at: "2025-02-06"
---

# June 3th: Finish the first version schematics for the PCB!!

I started the project by making the schematics first via KiCAD, a free open sources CAD editor for broke guy like me. I planning to use Pico because i dont know why, I already made some project using ESP nor Arduino so that why i want to step into the red side. The first problem I encountered is that the joystick need 4 ACD or analog pin while the Pico only had 3, so i use a module named ADS1115 that combine 4 analog pin into I2C that could be used in the Pico. Oh well, this is my first time building PCB so i hope its not going to explode anytime soon

![alt text](image.png)
hmm i hope it could be seen!


**Total time spent: 3**