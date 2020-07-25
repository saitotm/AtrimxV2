#include "gtest/gtest.h"

#include "../src/atrimxv2.hpp"

TEST(BinaryOpAddTest, 1x1) {
    AtrimxV2::Matrix<int, 1, 1> m1;
    AtrimxV2::Matrix<int, 1, 1> m2;
    AtrimxV2::Matrix<int, 1, 1> res;

    int a = 3;
    int b = 5;
    m1 << a;
    m2 << b;
    res << a + b;
    EXPECT_TRUE(res.is_approx(m1 + m2));
}