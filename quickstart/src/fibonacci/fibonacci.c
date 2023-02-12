/*
 * fibonacci.c
 *
 *  Created on: Feb 12, 2023
 *      Author: djek-sweng
 */

#include "fibonacci.h"

int fibonacci_compute(int n)
{
    int fn = 0;
    int fn_1 = 0;
    int fn_2 = 0;

    printf("Fibonacci sequence of %d is [ ", n);

    for (int i=0; i<(n+1); i++)
    {
        if (i < 2)
        {
            fn = i;
        }
        else
        {
            fn = fn_2 + fn_1;
        }

        fn_2 = fn_1;
        fn_1 = fn;

        printf("%d ", fn);    
    }

    printf("]\n");

    return fn;
}
