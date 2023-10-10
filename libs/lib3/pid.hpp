/**
 * @file pid.hpp
 * @author Sai Surya Sriramoju (saisurya@umd.edu)
 * @brief Contains, PID class, methods for PID controller
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once
#include <iostream>

class PID{
    public:
    /**
     * @brief Pid class Constructor to initiate the attributes
     * 
     */

     PID(double kp, double ki, double kd, double dt):
     key_prop(kp),
     key_integral(ki),
     key_der(kd),
     time_step(dt),
     prev_err(0),
     integral(0) {}

     /**
      * @brief Computes the pid error
      * 
      * @param set_point
      * @param current_state 
      * @return double pid error
      */
     double calculateUpdate(double set_point, double current_state);

     /**
      * @brief Calls the method calculateUpdate multiple times and calculates final state
      * 
      * @param set_point
      * @param current_state 
      * @return double 
      */
     double runPid(double set_point, double current_state);

   private:
    /**
    * @brief The proportional gain parameter for the PID controller.
    */
     double key_prop;

    /**
    * @brief The integral gain parameter for the PID controller.
    */
     double key_integral;

    /**
    * @brief The derivative gain parameter for the PID controller.
    */
     double key_der;

    /**
    * @brief The time step used for discrete-time PID control.
    */
     double time_step;

    /**
    * @brief The previous error value, used for calculating the derivative term.
    */
     double prev_err;

    /**
    * @brief The integral of the error over time, used for the integral term.
    */
     double integral;

};