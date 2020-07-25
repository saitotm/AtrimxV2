#include "gtest/gtest.h"
#include "gtest/internal/gtest-port.h"

#include "../src/atrimxv2.hpp"


TEST(MatrixIO, 1x1)
{
    AtrimxV2::Matrix<int, 1, 1> m;

    testing::internal::CaptureStdout();
    std::cout << m;
    ASSERT_STREQ("[0]", testing::internal::GetCapturedStdout().c_str());

    m(0, 0) = 8;
    testing::internal::CaptureStdout();
    std::cout << m;
    ASSERT_STREQ("[8]", testing::internal::GetCapturedStdout().c_str());
}

TEST(MatrixIO, 2x5)
{
    AtrimxV2::Matrix<int, 2, 5> m;

    testing::internal::CaptureStdout();
    std::cout << m;
    ASSERT_STREQ("[0, 0, 0, 0, 0\n 0, 0, 0, 0, 0]", testing::internal::GetCapturedStdout().c_str());

    testing::internal::CaptureStdout();
    m(1, 3) = -7;
    m(0, 2) = 110;
    std::cout << m;
    ASSERT_STREQ("[  0,   0, 110,   0,   0\n   0,   0,   0,  -7,   0]", testing::internal::GetCapturedStdout().c_str());
}

TEST(MatrixIO, 4x4)
{
    AtrimxV2::Matrix<int, 4, 4> m;

    testing::internal::CaptureStdout();
    std::cout << m;
    ASSERT_STREQ("[0, 0, 0, 0\n 0, 0, 0, 0\n 0, 0, 0, 0\n 0, 0, 0, 0]", testing::internal::GetCapturedStdout().c_str());

    m(1, 2) = 4;
    m(2, 2) = -5;
    m(3, 1) = -100;

    testing::internal::CaptureStdout();
    std::cout << m;
    ASSERT_STREQ("[   0,    0,    0,    0\n    0,    0,    4,    0\n    0,    0,   -5,    0\n    0, -100,    0,    0]", testing::internal::GetCapturedStdout().c_str());

    /*
    AtrimxV2::Matrix<float, 1, 1> mf1;
    AtrimxV2::Matrix<float, 2, 5> mf2;
    AtrimxV2::Matrix<float, 4, 4> mf3;

    std::cout << mf1 << std::endl;
    mf1(0, 0) = 8;
    std::cout << mf1 << std::endl;

    std::cout << mf2 << std::endl;
    mf2(1, 3) = -7.3;
    mf2(0, 2) = 110;
    std::cout << mf2 << std::endl;

    std::cout << mf3 << std::endl;
    mf3(1, 2) = 4.1;
    mf3(2, 2) = -5;
    mf3(3, 1) = -100.3;
    std::cout << mf3 << std::endl;
    */
}