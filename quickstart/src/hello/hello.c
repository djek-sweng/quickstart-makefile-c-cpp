/*
 * hello.c
 *
 *  Created on: Sep 27, 2022
 *      Author: djek-sweng
 */

#include "hello.h"

int hello_print(char** array, int length)
{
    for (int i=0; i<length; ++i)
    {
        printf("%s ", array[i]);
    }
    printf("\n");

    printf("Hello fibonacci.\n");

    return 0;
}
