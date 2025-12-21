
#include <gtest/gtest.h>
#include "math.hpp"

TEST(Math, Add) {
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(-1, 1), 0);
}

TEST(Math, Sum) {
    EXPECT_EQ(sum({}), 0);
    EXPECT_EQ(sum({1,2,3}), 6);
}
