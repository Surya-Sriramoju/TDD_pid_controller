#include <gtest/gtest.h>
#include "pid.hpp"

TEST(ComputeMethod, TEST) {
  ASSERT_NEAR(120, PID(0.2, 0.1, 0.01, 0.1).runPid(120.0, 0.0), 0.5);
}

TEST(ComputeMethod1, TEST2) {
  ASSERT_NEAR(90, PID(0.2, 0.1, 0.01, 0.1).runPid(90.0, 10.0), 1);
}

TEST(ComputeMethod2, TEST3) {
  ASSERT_NEAR(200, PID(0.2, 0.1, 0.01, 0.1).runPid(200.0, 30.0), 0.5);
}

