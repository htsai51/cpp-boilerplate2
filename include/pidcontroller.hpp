/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Huei Tzu Tsai                              *
 *                                                                  *
 ********************************************************************/


/** @file pidcontroller.hpp
 *  @brief Definition of class PIDController
 *
 *  This file contains definitions of class PIDController
 *  and its member for a control loop feedback mechanism.
 *
 *  @author Huei Tzu Tsai
 *  @date   02/22/2017
*/

#ifndef INCLUDE_PIDCONTROLLER_HPP_
#define INCLUDE_PIDCONTROLLER_HPP_


/**
 *  @brief Class that implements PID control loop feedback mechanism
*/
class PIDController {
 public:
     PIDController()                                  ///< contstructor
         : Kp(0), Ki(0), Kd(0), preError(0), preIntegral(0) {}
     ~PIDController() {}                              ///< deconstructor
     bool setControlParam(double, double, double);    ///< set control coeff
     double computeVelocity(double, double, double);  ///< compute velocity

 private:
     double Kp;                                       ///< proportional coeff
     double Ki;                                       ///< integral coeff
     double Kd;                                       ///< derivative coeff
     double preError;                                 ///< previous error
     double preIntegral;                              ///< previous integral
};

#endif  // INCLUDE_PIDCONTROLLER_HPP_
