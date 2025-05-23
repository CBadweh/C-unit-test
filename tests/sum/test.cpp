#include "CppUTest/TestHarness.h"

extern "C" {
    #include "sum.h"
}

TEST_GROUP(sum_test_group)
{
    void setup() {}
    void teardown() {}
};

TEST(sum_test_group, simple_sum)
{
    float array[] = {1.0, 2.0, 3.0};
    float result = sum(array, 3);
    DOUBLES_EQUAL(6.0, result, 0.0001);
}

TEST(sum_test_group, empty_array)
{
    float array[1];  // unused
    float result = sum(array, 0);
    DOUBLES_EQUAL(0.0, result, 0.0001);
}
