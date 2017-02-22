/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Huei Tzu Tsai                              *
 *                                                                  *
 ********************************************************************/

/**
 *  @file main.cpp
 *  @brief Initial file of scratch program
 *
 *  This file contains scratch program's
 *  main() function.
 *
 *  This program computes new velocity with given setpoint, actual
 *  velocity, and time, using PID control feedback mechanism.
 *
 *
 *  @author Huei Tzu Tsai
 *  @date   02/22/2017
*/


#include <iostream>
#include "pidcontroller.hpp"

using std::cin;
using std::cout;
using std::endl;


int main() {
    double kp = 0;
    double ki = 0;
    double kd = 0;
    double setPoint = 0;
    double actualVel = 0;
    double dTime = 0;
    double newVel = 0;
    PIDController pid;

    cout << "Please input Kp, Ki, Kd for PID control" << endl;

    cin >> kp >> ki >> kd;

    cout << "Please input setpoint, actual velocity, delta time" << endl;

    cin >> setPoint >> actualVel >> dTime;

    if (pid.setControlParam(kp, ki, kd)) {
        newVel = pid.computeVelocity(setPoint, actualVel, dTime);
        cout << "New velocity is " << newVel << endl;
    } else {
        cout << "Kp, Ki, Kd for PID control must be non-negative." << endl;
    }

    return 0;
}
