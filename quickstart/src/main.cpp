/*
 * main.cpp
 *
 *  Created on: Feb 12, 2023
 *      Author: djek-sweng
 */

#include "main.hpp"

int main(int argc, char** argv)
{
    hello_print(argv, argc);

    for (int i=1; i<argc; i++)
    {
        fibonacci_compute(atoi(argv[i]));
    }

    return 0;
}
