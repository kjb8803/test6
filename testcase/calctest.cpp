#include <cppunit/extensions/HelperMacros.h>
#include "../calc.h"

class calcTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(calcTest);
    CPPUNIT_TEST( testAdd );
    CPPUNIT_TEST_SUITE_END();
public:
    calcTest(void);
    ~calcTest(void);

    void setUp();
    void tearDown();
    void testAdd();

private:
    calc m_calc; 
};

CPPUNIT_TEST_SUITE_REGISTRATION( calcTest );

calcTest::calcTest(void){}
calcTest::~calcTest(void){}
void calcTest::setUp(){}
void calcTest::tearDown(){}

void calcTest::testAdd()
{
    CPPUNIT_ASSERT(m_calc.add(4, 5) == 9);
}
