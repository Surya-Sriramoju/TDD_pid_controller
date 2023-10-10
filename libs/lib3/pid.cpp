#include "../include/pid.hpp"
#include <iostream>


double PID::calculateUpdate(double set_point, double current_state) {
    // Calculate the error between the set point and current state.
    double error = set_point - current_state;

    // Calculate the proportional term of the PID controller.
    double Pout = key_prop * error;

    // Integrate the error over time.
    integral += error * time_step;
    
    // Calculate the integral term of the PID controller.
    double Iout = key_integral * integral;

    // Calculate the derivative term of the PID controller.
    double derivative = (error - prev_err) / time_step;
    double Dout = key_der * derivative;

    // Calculate the total output as the sum of P, I, and D terms.
    double output = Pout + Iout + Dout;

    // Update the previous error for use in the next iteration.
    prev_err = error;

    return output;
}

double PID::runPid(double set_point, double current_state) {
    // Perform a loop for a fixed number of iterations (e.g., 100 times).
    for (int i = 0; i < 100; i++) {
        // Calculate and accumulate the control output by calling calculateUpdate.
        current_state += calculateUpdate(set_point, current_state);
    }
    // Return the final state after the loop, which represents the controlled system's response.
    return current_state;
}

