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

## Possible Improvements

After working on this project, I understand that there are some possible improvements that can be made.

### Incorporating all the electronics to be PCB-based

A printed circuit board (PCB) that contains all the electrical components would be a great enhancement for a start. The overall final design would look visually appealing, a huge aesthetical improvement. It would also eliminate common, trivial sources of issues, such as loose wiring or contacts since copper traces are embedded into the board and components are soldered firmly. The circuit would be better organised, since labellings would be present on the board, allowing the user to quickly identify the components.

This improvement is feasible and realistic. Some effort would be needed to draw the circuit to produce an electronic CAD model for manufacturing. Nonetheless, it would be another great learning opportunity.

### Fine-tuning specific components

Looking at the overall project design, I wholeheartedly agree that certain parts can be streamlined. This version was a great improvement from the 1st version, where huge blocks and two guiding rails were used, yet more can be done.

The linear rails can be cut to a more compact size that would allow maximum syringe and plunger air volume being pumped, giving a more professional look. The same can be said about the threaded rod, with its teeth. A coarser threaded rod would increase the distance moved per rotation, as compared to a finer one. Perhaps even the force sensing resistor, whereby its calibration can be further sharpened with regards to the software aspect.

### Adding a GUI/Web Interface

Having a Graphical User Interface (GUI) or Web-based interface would be a great level of abstraction. This interface could contain pertinent properties such as the force sensor readings, calculated number of steps, syringe position, etc.

With this, not only would information be relayed more clearly to the user, but it would also improve the user friendliness and overall appreciation for this project. I would also be diving into the art of creating such interfaces, which would be another learning opportunity.

## Final Thoughts

All in all, working on this project has deepened my sense of understanding and knowledge in many ways. Besides being able to apply what I have learnt previously, I was also able to improve my engineering skillsets throughout this development. I look forward to seeing how the project can be implemented as a real world application, and perhaps even contribute further to enhance its capabilities.
