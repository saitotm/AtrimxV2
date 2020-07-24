#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/extensions/HelperMacros.h"
#include "cppunit/TextOutputter.h"

#include "../src/atrimxv2.hpp"

class MatrixTest : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(MatrixTest);
    CPPUNIT_TEST(rows_and_cols_test);
    CPPUNIT_TEST_SUITE_END();

public:
    void rows_and_cols_test()
    {
        AtrimxV2::Matrix<float, 1, 1> m1;
        AtrimxV2::Matrix<float, 10, 3> m2;
        CPPUNIT_ASSERT(m1.rows() == 1);
        CPPUNIT_ASSERT(m1.cols() == 1);
        CPPUNIT_ASSERT(m2.rows() == 10);
        CPPUNIT_ASSERT(m2.cols() == 3);
    }

    void is_approx()
    {
        AtrimxV2::Matrixf<1, 1> m1;
        AtrimxV2::Matrixf<1, 1> m2;

        m1 << 3;
        m2 << 3;

        CPPUNIT_ASSERT(m1.is_approx(m2, 1e-7));
    }
};

int main(int argc, char *argv[])
{
    CPPUNIT_TEST_SUITE_REGISTRATION(MatrixTest);

    CppUnit::TextUI::TestRunner runner;
    runner.addText(CppUnit::TestFactoryRegistry::getRegistry().makeTest());

    CppUnit::Outputter *outputter = new CppUnit::TextOutputter(&runner.result(), std::cout);
    runner.setOutputter(outputter);

    return runner.run() ? 0 : 1;
}