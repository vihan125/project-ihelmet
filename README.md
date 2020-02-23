# project-ihelmet
## Introduction 

One of the hardest and dangerous jobs on earth is mining because of low visibility and the harsh environment miners face a lot of difficulties. Small mistake is enough to take thousands of lives inside a mine. But the cause for many deaths inside a mine is because its hard to locate the position of the miner after an accident occur. Another reason for deaths inside a mine is the toxic gases that present inside mines and the dust particles. Because of dust miners get a disease called silicosis which is a lung fibrosis caused by the inhalation of dust containing silica. Given below is a chart that shows the effect of silicosis in the mining industry.



So the objectives of ihelmet is give a solution to problems that have mentioned above. Main goals of ihelmet system would be:
Detect toxic gases and dust and alarming the worker so that he can move from that place
Have a method to inform control center which is above the ground when a worker face an accident.
Tracking mechanism of workers so the workers can be reached immediately when an accident occurs.

## overview 

Safety of miners is really critical in mining industry. Ihelmet system is to ensure miners safety and also to monitor them continuously.This ihelmet system consists of three main parts,
Sensor node which will be attached to the helmet.
Communication protocol between all the helmets that present in the mine and the control center.
Monitoring and management of workers from the control unit .

### Sensor node

Sensor node is the part which will toxic gases around the worker and also the dust concentration. The gases sensor node will detect are methane(CH4), ammonia(NH3) and carbon monoxide(CO) If toxic gas concentration and dust concentration is higher than a certain threshold it will send a message to the control center saying that this particular worker is not in a safe area and also an alarm will start to ring in the workers helmet as well. And also if the worker face an accident inside the mine he can ask for help from the control center by pressing the emergency button in the sensor node. 
 In this project I designed a simple sensor node design using solidworks and get printed it using makerbot 3D printing machine. Design consists of two parts as the front part and the back cover part.
 
 ### Solidworks design
 
 <p align="center">
  <image src = https://github.com/vihan125/project-ihelmet/blob/master/images/solidworks1.PNG width="90%" height="90%">
</p>
 
 <p align="center">
  <image src = https://github.com/vihan125/project-ihelmet/blob/master/images/solidworks2.PNG width="90%" height="90%">
</p>
 
 <p align="center">
  <image src = https://github.com/vihan125/project-ihelmet/blob/master/images/solidworks3.PNG width="90%" height="90%">
</p>
 
 ### Output design
 
  <p align="center">
  <image src =https://github.com/vihan125/project-ihelmet/blob/master/images/helmet_1.JPG width="90%" height="90%">
</p>
 
 <p align="center">
  <image src =https://github.com/vihan125/project-ihelmet/blob/master/images/helmet_2.JPG width="90%" height="90%">
</p>
 
 
 
 
 

### Communication protocol

Communication protocol is the link between sensor node and the control unit. In modern day mines exits as layers. And according to our protocol each layer should have a hub connected to the control unit by an ethernet cable. Helmets that present in a one layer are connected to the hub in that layer wirelessly. And each helmet will have a seperate allocated band for communication.

### Monitoring and management from control unit

This is an existing unit of mines where all control decisions are made. So the information about workers can be appended to this unit using data from our sensor nodes. Then people who are in the control room can see which workers need help which areas have toxic gases etc.
