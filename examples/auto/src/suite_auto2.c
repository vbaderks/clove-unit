#define CLOVE_SUITE_NAME MySecondSuite
#include "clove.h"

CLOVE_TEST(FailingTest) {
    int a = 1;
    int b = 2;
    CLOVE_INT_EQ(a, b);
}

