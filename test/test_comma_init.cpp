#include "gtest/gtest.h"

#include "../src/atrimxv2.hpp"

TEST(CommaInitialize, 1x1) {
    AtrimxV2::Matrix<int, 1, 1> m;
    m << 8;
    EXPECT_EQ(8, m1(0, 0));
}

TEST(CommaInitialize, 5x3) {
    AtrimxV2::Matrix<float, 5, 3> m;
    m << 1 << 2 << 3 
    << 4 << 5 << 6
    << 7 << 8 << 9
    << 10 << 11 << 12
    << 13 << 14 << 15;

    EXPECT_EQ(1, m(0, 0));
    EXPECT_EQ(2, m(0, 1));
    EXPECT_EQ(3, m(0, 2));

    EXPECT_EQ(4, m(1, 0));
    EXPECT_EQ(5, m(1, 1));
    EXPECT_EQ(6, m(1, 2));

    EXPECT_EQ(7, m(2, 0));
    EXPECT_EQ(8, m(2, 1));
    EXPECT_EQ(9, m(2, 2));

    EXPECT_EQ(10, m(3, 0));
    EXPECT_EQ(11, m(3, 1));
    EXPECT_EQ(12, m(3, 2));

    EXPECT_EQ(13, m(4, 0));
    EXPECT_EQ(14, m(4, 1));
    EXPECT_EQ(15, m(4, 2));
}

TEST(CommaInitalize, 4x7) {
    AtrimxV2::Matrix<float, 4, 7> m;
    m << 1 << 2 << 3 << 4 << 5 << 6 << 7
    << 8 << 9 << 10 << 11 << 12 << 13 << 14
    << 15 << 16 << 17 << 18 << 19 << 20 << 21
    << 22 << 23 << 24 << 25 << 26 << 27 << 28;

    EXPECT_EQ(1, m(0, 0));
    EXPECT_EQ(2, m(0, 1));
    EXPECT_EQ(3, m(0, 2));
    EXPECT_EQ(4, m(0, 3));
    EXPECT_EQ(5, m(0, 4));
    EXPECT_EQ(6, m(0, 5));
    EXPECT_EQ(7, m(0, 6));

    EXPECT_EQ(8, m(1, 0));
    EXPECT_EQ(9, m(1, 1));
    EXPECT_EQ(10, m(1, 2));
    EXPECT_EQ(11, m(1, 3));
    EXPECT_EQ(12, m(1, 4));
    EXPECT_EQ(13, m(1, 5));
    EXPECT_EQ(14, m(1, 6));

    EXPECT_EQ(15, m(3, 0));
    EXPECT_EQ(16, m(3, 1));
    EXPECT_EQ(17, m(3, 2));
    EXPECT_EQ(18, m(3, 3));
    EXPECT_EQ(19, m(3, 4));
    EXPECT_EQ(20, m(2, 5));
    EXPECT_EQ(21, m(2, 6));

    EXPECT_EQ(22, m(4, 0));
    EXPECT_EQ(23, m(4, 1));
    EXPECT_EQ(24, m(4, 2));
    EXPECT_EQ(25, m(4, 3));
    EXPECT_EQ(26, m(4, 4));
    EXPECT_EQ(27, m(4, 5));
    EXPECT_EQ(28, m(4, 6));
}

