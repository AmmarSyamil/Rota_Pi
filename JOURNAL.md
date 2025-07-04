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


**Total time spent: 4H**

# June 21th: 3D menace

For this project, I decided to use FreeCAD instead of other free CAD software like Fusion 360, because I actually dont know good free cad software until I read the recomended thing in highway website (whhich recomedn to use fusion360) and by that time, i already learn freecad. But oh well, it cant be that bad right??

Well.... As for the last hour i just tweeks all of my brain celll about how to like change the position of a pad in 3d wihtout cahnging the sketch, theres a built in setting called "placement", but it didnt update the real pad position, i try following countless YT videos and endless reddid post, and found no hope until i found this post:
https://www.reddit.com/r/FreeCAD/comments/1ht0gcg/in_freecad_10_i_cant_adjust_position_of_a_sketch/

And theres a person said this "Edit attachment, not placement. ". So wait, i check it but like where do the attachement option is????. until countless time afterward i found it but in the properties setting of the pad. And i click the edit button from the attachment part and it show similar tab like my initial placement setting, but the different is that its works. yayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy

And this is bc in Freecad, when we tweeks the placement, its like moving the whole goddam thing like what its sitting on and waht its link too also move, and this create error and bc of that,  freecad disalow this setting. The right way is to change via attachment, or just change this and other think will adapt to it, and this is fine. But why dotn Freecad tells me this? (maybe i should have been using Fusion360 instead this whole time)

So other than this problem the infamous "wire is not closed" error is haunted me for hours, but its not as bad as that one. So heres is where i left on today:
![alt text](image/5.png)
![alt text](image/6.png)

**Total time spent: 6H**

# June 26th: re-doing

So i just did some things like planning the button placement, making the non finish rear part, and basically the structure. Until a time i notice that my handle are too small, its not about my calculation but its about the handle structure that make lots of part of the handle into the cap of the wheel. Thankfully i notice it before building the screww and detailing stuff, but it still suck to redo almost all part of it, its not that much actually. BUT...... i face error, bc i change a part of a sketch, the other part that are linked to it became error, and welp, almost 30 error is showned when i doing sometihing (freecad will always tell the error everytime the user do thign, eventho its not related). 

I fix it, its preatty easy cux freecad tools me what part of it. BUT............ theres a part where in the sketch its included but the pad of it its not,u can see the image below teh one in the green line. So what happen is that when i update the part of the handle, the updated part is working but the old one (which is the top part ) not showing eventho i dont doo anything to it. I just furious and i almost crashout (chatgpt also). chatgpt told me that it maybe bc theres some line that arent connected, but if there is there must be the "wire not closed" error, which there aren't, he said to chechk the sketch using sketch validate tools, but i try em, and it show all fine. and at last resoult i try remaking the top part, and it works, guess when finding a bug is better to make it from scratch rather than fixing it, not bc im lazy it just bc the software is bugging (nah this man is escussing)
![alt text](image.png)

oh almost forget, the handle update i mention earlier is the bottom part here:
![alt text](image-1.png)
**Total time spent: 6H**
