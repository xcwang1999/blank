#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(HelloTest, multiplier) {
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}