/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Huei Tzu Tsai                              *
 *                                                                  *
 ********************************************************************/


/** @file pidcontroller.cpp
 *  @brief Implementation of class PIDController methods
 *
 *  This file implements methods in PIDController class
 *  for a control loop feedback mechanism.
 *
 *  @author Huei Tzu Tsai
 *  @date   02/22/2017
*/

#include "pidcontroller.hpp"

/**
 *   @brief  Set the coefficients for control loop feedback mechanism
 *  
 *   @param  non-negative proportional coefficient as double
 *   @param  non-negative integral coefficient as double
 *   @param  non-negative derivative coefficient as double
 *   @return true if set parameters is successful, false otherwise
*/
bool PIDController::setControlParam(double p, double i, double d) {
    // non-negative proportional, integral, derivate gains
    if (p < 0 || i < 0 || d < 0) {
        return false;
    }

    Kp = p;
    Ki = i;
    Kd = d;

    return true;
}


/**
 *   @brief  Compute the new velocity using PID control mechanism
 *  
 *   @param  setpoint velocity in double
 *   @param  actual velocity in double
 *   @param  delta time in double
 *   @return new velocity in double
*/
double PIDController::computeVelocity(double setPoint, double curVelocity,
                                      double time) {
    double newVelocity = 25.0;        ///< FIXME

    /* FIXME: to be implemented */

    return newVelocity;
}

