#include "average.h"

// Correctly Implement average(), all unit test cases will pass
/*
float average(float arr[], unsigned int size)
{
    if (size == 0)
    {
        return 0.0;
    }
    
    float total = 0;
    for (unsigned int i = 0; i <= size; i++) 
    {
        total += arr[i];
    }
    
    return total / (float)size;
}
*/


// Break The Function to observe simple_test. Replace  with *
/*
float average(float arr[], unsigned int size)
{
    if (size == 0)
    {
        return 0.0;
    }
    
    float total = 0;
    for (unsigned int i = 0; i <= size; i++) 
    {
        total += arr[i];
    }
    
    return total * (float)size; // ❌ wrong! should divide, not multiply
}
*/

// Break The Function to observe null_test
/*
float average(float arr[], unsigned int size)
{
    // BUG: No check for size == 0
    float total = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total / (float)size; // ❌ Division by 0 if size == 0
}
*/



// negative_value_tests
/*
float average(float arr[], unsigned int size)
{
    if (size == 0)
    {
        return 0.0;
    }
    
    float total = 0;
    for (unsigned int i = 0; i <= size; i++) 
    {
        // Hidden bug: skips negatives
        if (arr[i] >= 0) total += arr[i];
    }
    
    return total / (float)size;
}
    */