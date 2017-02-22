/********************************************************************
 *                                                                  *
 * Copyright (C) 2017 by Huei Tzu Tsai                              *
 *                                                                  *
 ********************************************************************/

/**
 *  @file main.cpp
 *  @brief Initial file of test program
 *
 *  This file contains test program's
 *  main() function.
 *
 *  This program perform unit test of PID control feedback mechanism
 *  which computes new velocity with given setpoint, actual velocity,
 *  and time.
 *
 *
 *  @author Huei Tzu Tsai
 *  @date   02/22/2017
*/

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

