# Haptic Glove Project

The haptic glove project is one of the projects I worked on during my time as an intern at the Home Team Science & Technology Agency (HTX).

## Objective

To use a force touch sensor to provide an equivalent force (haptic feedback) on the user’s fingers fitted in a glove.

## Description

This project involves the use of syringes that pump in air to silicone sockets attached to the gloves' fingers. The syringes will be positioned on two 3D printed holders, one for the front and another for the back. The back holder is the only movable piece, as it is attached directly to a linear guide rail at the bottom via M3 fasteners. A hexagonal nut hole was precisely designed in the middle for a nut to be placed. This nut will be attached to a threaded rod, which in turn, is coupled to a stepper motor.

A force sensing resistor will detect the amount of force exerted on the resistor, which is translated to a suitable number of steps value for the stepper motor to move.

![Image](https://github.com/muadzyamani/htx-hapticglove/blob/main/Images/syringeMechanismImg1.png)

## What I Learnt

Throughout the development of this project, I picked up various important skills and reinforced my engineering knowledge. The project involved many iterations and versions to be created until a proper and functional design was made. Trial and error was a common occurence, both in the hardware and software domains, something I had to embrace and work with despite the range of emotions experienced.

The things I learnt can be divided into the following:

- Hardware
- Software
- Documentation

### Hardware (Electrical & Mechanical)

The main mechanism designed to change the volume of air being pumped into the silicone sockets comes from the hardware portion of the project. I learnt how to incorporate different components together, such as the linear rail, sliding block, syringe holder, plunger holder, motor mount, etc. In addition, I revisited previously learnt concepts when laying out the electrical circuit and introducing electronic components.

Initially, this was challenging because whenever a design review was conducted, subsequent parts that were affected had to be remodelled, redesigned or manufactured again. Nonetheless, it was patience and perserverance that paid off in the end upon observing the completed assembly.

![Image](https://github.com/muadzyamani/htx-hapticglove/blob/main/Images/syringeMechanismImg2.png)

![Image](https://github.com/muadzyamani/htx-hapticglove/blob/main/Images/topViewMechanismImg.png)

### Software

For the whole mechanism and project to function, instructions had to be given. An Arduino Mega was used as the microcontroller to read the force sensing resistor values and turn the stepper motors. After perusing several guides, tutorials and articles, I was able to put together a program that could satisfy the project requirements. Learning how to use the AccelStepper library empowered me to produce concise and reliable instructions for the NEMA 17 Stepper Motors used.

I found the software process meaningful and rewarding. Exploring and trying, all in search of possible improvements proved to be salient.

### Documentation

As part of staying organised, I decided to document the project. Documenting a project is undoubtedly a skill that I wish to enchance. I learnt to tell a story while relaying the details of the project. Sometimes as I write, I would reflect and experience a light bulb moment, a state of realisation or epiphany to a problem.

A well-written document, included with diagrams and illustrations can go a long way to serve as a reminder for my future self, or a guide for others who wish to build on the idea. See my documentation [here](https://github.com/muadzyamani/htx-hapticglove/tree/main/Documentation).
