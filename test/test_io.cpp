#include "../src/atrimxv2.hpp"

int main(int argc, char *argv[])
{
    AtrimxV2::Matrix<int, 1, 1> mi1;
    AtrimxV2::Matrix<int, 2, 5> mi2;
    AtrimxV2::Matrix<int, 4, 4> mi3;

    std::cout << mi1 << std::endl;
    mi1(0, 0) = 8;
    std::cout << mi1 << std::endl;

    std::cout << mi2 << std::endl;
    mi2(1, 3) = -7;
    mi2(0, 2) = 110;
    std::cout << mi2 << std::endl;

    std::cout << mi3 << std::endl;
    mi3(1, 2) = 4;
    mi3(2, 2) = -5;
    mi3(3, 1) = -100;
    std::cout << mi3 << std::endl;

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
}