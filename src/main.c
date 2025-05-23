#include <stdio.h>
#include "average.h"
#include "sum.h"

int main()
{
    float array[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
    float avg = average(array, 5);
    printf("Average: %f\r\n", avg);

    // Add Sum Component
    float total = sum(array, 5);
    printf("Sum: %f\r\n", total);
    
    return 0;
}