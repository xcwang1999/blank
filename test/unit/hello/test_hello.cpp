#include <gtest/gtest.h>
#include <hello/hello.h>

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  printHello();
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello, world, ", "from gtest.");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}