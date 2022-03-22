#include "SimpleAverage.h" 
#include "../../Unity/src/unity.h" 
 
struct simple_average_s test_simple_average;
 
void setUp(void) 
{ 
  test_simple_average.sum = 0;
  test_simple_average.count = 0;
} 
 
/** 
 * @brief Tests passing null to init
 * 
 */ 
void test_NullInit() 
{ 
  int ret = InitSimpleAverage(NULL);
  TEST_ASSERT_EQUAL_INT_MESSAGE(-1, ret, "Did not return error (-1)");
} 

void test_Init() {
  int ret = InitSimpleAverage(&test_simple_average);
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, ret, "Did not return correct init (0)");
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, test_simple_average.count, "Count should have been reset to 0");
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, test_simple_average.sum, "Sum should have been reset to 0");
}

void test_10() {
  test_simple_average.sum = 10;
  test_simple_average.count = 11;
  int ret = InitSimpleAverage(&test_simple_average);
  TEST_ASSERT_EQUAL_INT_MESSAGE(0, ret, "Did not return correct init (0)");

  for (int i = 1; i <=10; i++) {
    ret = UpdateSimpleAverage(&test_simple_average, i);
    TEST_ASSERT_EQUAL_INT_MESSAGE(0, ret, "Did not return correctly from UpdateSimpleAverage (0)");
  }
  ret = GetSimpleAverage(&test_simple_average);
  TEST_ASSERT_EQUAL_INT_MESSAGE (5, ret, "Average of range 0-10 should be 5");
}
