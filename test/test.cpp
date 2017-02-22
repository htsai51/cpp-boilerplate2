/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Huei Tzu Tsai                              *
 *                                                                  *
 ********************************************************************/


/** @file test.cpp
 *  @brief Implementation of unit test for PIDController
 *
 *  This file contains implementation of unit test for
 *  TestPIDController.
 *
 *  @author Huei Tzu Tsai
 *  @date   02/22/2017
*/

#include <gtest/gtest.h>
#include "pidcontroller.hpp"

/**
 *   @brief  Test the set control parameter function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
TEST(testSetControlParam, should_pass) {
    PIDController pid;
    ASSERT_TRUE(pid.setControlParam(1, 1, 1));
}


/**
 *   @brief  Test the compute velocity function of
 *           PIDController
 *
 *   @param  none
 *   @return none
*/
TEST(testComputeVelocity, should_pass) {
    PIDController pid;
    ASSERT_EQ(pid.computeVelocity(25, 20, 1), 15);
}

