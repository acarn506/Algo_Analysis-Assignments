
# CS 401 Quiz 3

  

### Manufacturing Robot Control System

### Q1

#### ( a )
### Subsystems 
- Control System  - Interacts and processes sensor information and calculates current position and velocity of the Robotic arm.  
- Servo Motors (3 arm joints) - is dependent on the control system to update motor positions.  

### Interfaces 
- Accelerometer - data of measurements along the xyz axis.  
- Image Sensor - visual feedback.  

#### ( b )

```mermaid
graph LR
A[Control System] --> B[Servo Motors]
C((Accelerometer)) --- A
D((Image Sensor)) --- A
```
#### ( c )

The Control System will identify and properly handle errors or miscalculations.  

### Q2

#### ( a )
1.  To incorporate the requirement of a new image interface I would reconfigure the method in the control system class that gathers the image data to be able to gather the newly formatted data.  
2. 

#### ( b )
1.  
     - Software Subsystem
     - Control System
     - Robotic Arm 
     - ImageSensor
     - Accelerometer 
     - ServoMotors  
     - parts 
2.  ``` mermaid
    classDiagram 
     Control System {
             velocity
             updateServoMotor()
      }
      ImageSensor {
            foreignObjectDetected 
            collectDate()
      }
      Accelerometer {
            x-coordinate
            collectData()
      } 
      ServoMotor {
          turnDegrees()
      }
 
 3.  
    
