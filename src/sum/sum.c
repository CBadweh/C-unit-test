#include "sum.h"

float sum(float arr[], unsigned int size)
{
    float total = 0;
    for (unsigned int i = 0; i < size; i++)
    {
        total += arr[i];
    }
    return total;
}
