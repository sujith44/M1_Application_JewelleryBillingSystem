#include "fun.h"
#include "unity.h"
#include "struct.h"

void test_deleteitem(void);
void test_searchitem(void);
void test_additem(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_deleteitem);
  RUN_TEST(test_searchitem);
  RUN_TEST(test_additem);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_deleterecords(void)
{
    char product[20]="12345";
    TEST_ASSERT_EQUAL("12345", product);
   
}

void test_searchrecords(void)
{
    char product[20]="12345";
    TEST_ASSERT_EQUAL("12345", product);
   
}

void test_addrecords(void)
{
    char name[20]="Nirmal";

    char company[20]="RJ Jewellers";

    char price [20]="36800";

 TEST_ASSERT_EQUAL("Nirmal", name);
 TEST_ASSERT_EQUAL("RJ Jewellers", company);
 TEST_ASSERT_EQUAL("36800", price);
   
}
