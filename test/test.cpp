#include <gtest/gtest.h>
#include "pid.hpp"

TEST(ComputeMethod, TEST) {
  PID pid_cont = PID(0.2, 0.1, 0.01, 0.1);
  double final_state = pid_cont.runPid(120.0, 0.0);
  ASSERT_NEAR(120, final_state, 1);
}

TEST(ComputeMethod1, TEST2) {
  PID pid_cont = PID(0.2, 0.1, 0.01, 0.1);
  double final_state = pid_cont.runPid(90.0, 10.0);
  ASSERT_NEAR(90, final_state, 1);
  }

TEST(ComputeMethod2, TEST3) {
  PID pid_cont = PID(0.2, 0.1, 0.01, 0.1);
  double final_state = pid_cont.runPid(200.0, 30.0);
  ASSERT_NEAR(200, final_state, 1);
}


