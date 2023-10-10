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

class PID{
    public:
    /**
     * @brief Pid class with methods and attributes to compute the final state of the velocity
     * 
     */

     PID(double kp, double ki, double kd, double dt);

     /**
      * @brief Computes the pid error
      * 
      * @param goal_state 
      * @param current_state 
      * @return double pid error
      */
     double calculateUpdate(double goal_state, double current_state);

     /**
      * @brief Calls the method calculateUpdate multiple times and calculates final state
      * 
      * @param goal_state 
      * @param current_state 
      * @return double 
      */
     double runPid(double goal_state, double current_state);

    private:
        double _kp;
        double _ki;
        double _kd;
        double _dt;
        double _prev_error;
        double _integration;


};