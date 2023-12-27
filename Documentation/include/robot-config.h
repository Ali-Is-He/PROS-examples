/*
    THIS IS A FILE FOR DECLARING ALL THE PHYSCIAL HARDWARE YOU WILL BE USING SUCH AS:
    - Motor
    - MotorGroup
    - Sensors
    - Controllers
    - Controller Buttons (Yes you need to explicitly declare the buttons you will use)

    Think of this file as making a promise that you will use only the hardware defined here.
*/
//////////////////////    DONT TOUCH THESE LINES    ///////////////////////////
#include "main.h"           // imports stuff from main.h so it can be used here
#pragma once
///////////////////////////////////////////////////////////////////////////////



//////////  MOTOR DECLARATION ////////////////////////////
/*
  In PROS you can decalre Motor and MotorGroup
  - Motor       <-- Used to declare single motor
  - MotorGroup  <-- Used to declare multiple motors that will be working together in 1 sub system

  NOTE: You have to declare the motors you plan on using in the motor group. So if you have a leftDrive motor group you also need to separately declare the motors that would be in that group
  
  The general way to declare a Motor is as follows:
    - extern pros::Motor motorName
  The general way to declare a MotorGroup is as follows:
    - extern pros::MotorGroup motorGroupName


  Breaking down each word:
    - "extern"                        <--  tells the compiler that this is a thing that will be referenced in another file
    - pros::                          <--  tells the compiler that the thing you are making is from the pros library or namespace
    - "Motor" or "MotorGroup"         <-- is the thing you're declaring
    - "MotorName" or "motorGroupName" <-- is the name you will be using to reference that object for the rest of the code
  BELOW ARE A FEW EXAMPLES OF Motor and MotorGroup DECLARATIONS
*/

extern pros::Motor leftFrontDrive;      // Motor for the front left motor on the drivetrain
extern pros::Motor leftBackDrive;       // Motor for the back left motor on the drivetrain
extern pros::Motor rightFrontDrive;     // Motor for the front right motor on the drivetrain
extern pros::Motor rightBackDrive;      // Motor for the back right motor on the drivetrain
extern pros::Motor_Group leftDrive;     // Group for the motors on the left side of the drivetrain
extern pros::Motor_Group rightDrive;    // Group for the motors on the right side of the drivetrain
extern pros::Motor lowerIntake;         // Motor for the bottom intake motor on the robot
extern pros::Motor upperIntake;         // Motor for the top intake motor on the robot
extern pros::Motor launcher;            // Motor for the launcher motor on the robot
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////  Sensor DECLARATION ////////////////////////////
/*

    You can declare the following sensors:
    - ADIAnalogIn       <-- Anything that is a 3 wire analog sensor like a line follower, or Potentiometer
    - ADIAnalogOut      <-- Anything that you will be giving analog outputs to
                            I HAVE NEVER USED THIS and you wont either
    - ADIDigitalIn      <-- Anything that is a digital sensor like a 3 wire limit switch
    - ADIDigitalOut     <-- Things that take digital values (really just pneumatics)
    - ADIEncoder        <-- Used to declare a red encoder, you'll probably never use it
    - ADIUltrasonic     <-- Used to declare a 3 wire Ultra sonic range, you'll probably never use it
    - ADIGyro           <-- Used to declare a red 3 wire gyro
    - ADIPotentiometer  <-- Used to declare a red 3 wire potentiometer
    - Distance          <-- Used to declare a V5 distance sensor
    - Gps               <-- Used to delcare a V5 GPS sensor
    - Optical           <-- Used to declare a V5 optical sensor (this sensor gets distance, color, and direction of something moving in front of it like left or right)
    - Rotation          <-- Used to declare a V5 Rotation Sensor

    Heres the link to all 3 wire devices you could declare, how to declare them, and their functions:
        https://pros.cs.purdue.edu/v5/api/cpp/adi.html

    Here are the links to all the other sensors you could declare, how to declare them, and their functions:
        Distance:   https://pros.cs.purdue.edu/v5/api/cpp/distance.html
        GPS:        https://pros.cs.purdue.edu/v5/api/cpp/gps.html 
        Optical:    https://pros.cs.purdue.edu/v5/api/cpp/optical.html
        Rotation:   https://pros.cs.purdue.edu/v5/api/cpp/rotation.html 

    The general way to decalre a Sensor is as follows:
        - extern pros:: ADIAnalogIn sensorName

    Breaking down each word:
      - "extern" tells the compiler that this is a thing that will be referenced in another file
      - "pros:: " is used to tell the compiler we are using a PROS sensor object instead of a sensor object from a different namespace/library.
      - "ADIAnalogIn" is the type of sensor you are declaring. This can be anything from the list above (ex: Distance, ADIGyro, Rotation)
      - "sensorName" is the name you will be using to refernce that sensor for the rest of the code

    BELOW ARE A FEW EXAMPLES OF sensor DECLARATIONS
*/
extern pros::Imu gyro;                              // IMU sensor
extern pros::ADIAnalogIn ballDector;                // ADI 3 wire line follower used for dectecting balls in intake
extern pros::ADIDigitalIn launcherPullbackDetector; // ADI 3 wire Limitswitch for detecting if launcher is pulled back or not
extern pros::ADIAnalogIn armPotentiometer;          // ADI 3 wire Potentiometer for checking angle of launcher
extern pros::Rotation liftencoder;                  // V5 Rotation sensor for checking how high the lift is
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//////////  CONTROLLER DECLARATION ////////////////////////////
/*
  Controller declaration is similar to previous declarations
*/
extern pros::Controller mainController;         // The Main Controller
extern pros::Controller secondaryController;    // The Partner Controller

//////////  CONTROLLER  BUTTON DECLARATIONS /////////
/*
    While you dont need to declare the buttons you will be using on your controller, doing so makes it a little easier later and you can use OKAPI.

        For now I will leave the stuff below commented out but if you wanted to use OKAPI you could uncomment below and modify it to be the buttons you needed
        
        This declaration is similar to previous declarations but the name you
        give will be what you use to refernce that button in the rest of the Code
        You'll see in deviceDefinitions.cpp how these buttons are used
        NOTE: YOU DO NOT NEED TO DECLARE THE ANALOG JOYSTICKS
*/


