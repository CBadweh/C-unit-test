#include "CppUTest/TestHarness.h"

extern "C" {
    #include "average.h"
}

// Create a test group
TEST_GROUP(average_test_group)
{
    void setup()
    {
        // Initialize before each test
    }
    
    void teardown()
    {
        // Deinitialize after each test
    }
};

// Test the average function
TEST(average_test_group, simple_test)
{
    float array[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
    float avg = average(array, 5);
    CHECK_EQUAL(avg, 1.0);
}

// Test null array
TEST(average_test_group, null_test)
{
    float array[1];                // Content is irrelevant
    float avg = average(array, 0); // Call with size = 0
    CHECK_EQUAL(avg, 0.0);         // Expect: return value is 0.0
}

// TEST(average_test_group, negative_values_test)
// {
//     float array[] = {-2.0, -4.0, -6.0, -8.0};
//     float avg = average(array, 4);
//     DOUBLES_EQUAL(-5.0, avg, 0.0001);  // Expect: (-2 -4 -6 -8)/4 = -5
// }