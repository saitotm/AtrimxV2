#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/TexOutputter.h"

class BinaryOpTest : public CppUnit::TextFixture
{
    CPPUNIT_TEST_SUITE(BinaryOpTest);
    CPPUNIT_TEST(matrix_sum_test);
    CPPUNIT_TEST_SUITE_END();

public:
    void matrix_int_sum_test()
    {
        AtrimxV2::Matrix<int, 1, 1> m1;
        AtrimxV2::Matrix<int, 1, 1> m2;
        (m1 + m2).a\
    }
    void matrix_float_sum_test()
    {
        AtrimxV2::Matrixf<> 
    }

};

int main(int argc, char *argv[])
{
    CPPUNIT_TEST_SUITE_REGISTRATION(BinaryOpTest);

    CppUnit::TextUI::TestRunner runner;
    runner.addText(CppUnit::TestFactoryRegistry::getRegistry().makeTest());

    CppUnit::Outputter *outputter = new CppUnit::TextOutputter(&runner.result(), std::cout);
    runner.setOutputter(outputter);

    return runner.run() ? 0 : 1;
}