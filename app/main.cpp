/**
 * @file main.cpp
 * @author Sai Surya Sriramoju (saisurya@umd.edu)
 * @brief Main file for creating object class and calling the method.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "../include/pid.hpp"

int main()
{
  PID pid_cont = PID(0.2, 0.1, 0.01, 0.1);
  double final_state = pid_cont.runPid(120.0, 0.0);
  std::cout << "Final State is: " << final_state << std::endl;
}