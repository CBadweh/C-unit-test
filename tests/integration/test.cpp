/*
Let’s write an integration test where we:
    Use sum() to compute a total
    Manually divide by size to verify average independently
    Compare that result with the output of average()
*/

#include "CppUTest/TestHarness.h"

extern "C" {
    #include "sum.h"
    #include "average.h"
}

TEST_GROUP(integration_test_group)
{
    void setup() {}
    void teardown() {}
};

TEST(integration_test_group, sum_and_average_should_agree)
{
    float array[] = {10.0, 20.0, 30.0, 40.0};
    unsigned int size = 4;

    float s = sum(array, size);
    float avg_manual = s / (float)size;
    float avg_function = average(array, size);

    DOUBLES_EQUAL(avg_manual, avg_function, 0.0001);
}
