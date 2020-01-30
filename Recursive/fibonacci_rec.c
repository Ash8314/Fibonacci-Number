#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

/*
* FUNCTION: Fibonacci
* Returns the Fibonacci number.
* The function calculates the Fibonacci number recursively.
*/

unsigned long long Fibo_Recursive(unsigned int n)
{
    if(n == 0)
        return n;
    else if(n == 1)
        return n;
    else
        return (Fibo_Recursive(n-1) + Fibo_Recursive(n-2));
}
