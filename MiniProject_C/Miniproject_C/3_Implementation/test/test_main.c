
#include "../inc/header.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
#include <stdio.h>
//#include "main.c"
//#include "header.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_check(void)
{
  char dsym[9]= {'1','2','3','4','X','6','7','8','X'};
  char dch='X';
  int dcount=1;
  TEST_ASSERT_EQUAL(1,check( dsym[9], dch, dcount));
  //check( dsym[9], dch, dcount
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_check);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
