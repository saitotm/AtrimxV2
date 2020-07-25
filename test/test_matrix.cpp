#include "gtest/gtest.h"

#include "../src/atrimxv2.hpp"

TEST(MatrixRowsAndColsTest, 1x1) {
    AtrimxV2::Matrix<float, 1, 1> m;
    EXPECT_EQ(1, m.rows());
    EXPECT_EQ(1, m.cols());
}

TEST(MatrixRowsAndColsTest, 10x3) {
    AtrimxV2::Matrix<float, 10, 3> m;
    EXPECT_EQ(10, m.rows());
    EXPECT_EQ(3, m.cols());
}

/*
TEST(MatrixIsApprox, 1x1) {
    AtrimxV2::Matrix<float, 1, 1> m1;
    AtrimxV2::Matrix<float, 1, 1> m2;

    m1 << 3;
    m2 << 3;

    EXPECT_TRUE(m1.is_approx(m1, 1e-7));
    EXPECT_TRUE(m2.is_approx(m2, 1e-7));
    EXPECT_TRUE(m1.is_approx(m2, 1e-7));
    EXPECT_TRUE(m2.is_approx(m1, 1e-7));
}
*/
