#include "fun.h"
#include "unity.h"
#include " struct.h"


void test_deletescores(void);
void test_searchscores(void);
void test_addscores(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_deletescores);
  RUN_TEST(test_searchrscores);
  RUN_TEST(test_addscores);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_deletescores(void)
{
    char name[10]="Balamurugan";
    TEST_ASSERT_EQUAL("Balamurugan", name);
   
}

void test_searchscores(void)
{
    char game[10]="Quiz";
    TEST_ASSERT_EQUAL("Balamurugan", game);
   
}

void test_addscores(void)
{
    char name[10]="Balamurugan";

    char name[10]="Damo";

    char level [10]="5";

 TEST_ASSERT_EQUAL("Balamurugan",name);
 TEST_ASSERT_EQUAL("Quiz",game);
 TEST_ASSERT_EQUAL("5", level);
   
}
