#include <cppunit/config/SourcePrefix.h>
#include "ExampleTestCase.h"
#include <string>

CPPUNIT_TEST_SUITE_REGISTRATION( ExampleTestCase );

void ExampleTestCase::example()
{
  CPPUNIT_ASSERT_DOUBLES_EQUAL( 1.0, 1.1, 0.05 );
  CPPUNIT_ASSERT( 1 == 0 );
  CPPUNIT_ASSERT( 1 == 1 );
}


void ExampleTestCase::anotherExample()
{
  CPPUNIT_ASSERT (1 == 1);
}

void ExampleTestCase::setUp()
{
  m_value1 = 2.0;
  m_value2 = 3.0;
}

void ExampleTestCase::testAdd()
{
  double result = m_value1 + m_value2;
  double L = 5;
  CPPUNIT_ASSERT( result == L );
}




void ExampleTestCase::testEquals()
{
  long* l1 = new long(12);
  long* l2 = new long(12);

  CPPUNIT_ASSERT_EQUAL( 12, 12 );
  CPPUNIT_ASSERT_EQUAL( 12L, 12L );
  CPPUNIT_ASSERT_EQUAL( *l1, *l2 );

  delete l1;
  delete l2;

  CPPUNIT_ASSERT( 12L == 12L );
  std::string Name = "James";
  CPPUNIT_ASSERT_EQUAL( Name, t2() );
  CPPUNIT_ASSERT_DOUBLES_EQUAL( 12.0, 11.99, 0.5 );
}

