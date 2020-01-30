#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

/*
* FUNCTION: Fibonacci
* Returns the Fibonacci number.
* The function calculates the Fibonacci number iteratively with memonization.
*/

BigInt Fibonacci(int n)
{
    if(n < 0)
    {
        printf("ERROR! Negative Number\n");
    }
    else
    {
        //Declaring an array of size (n+1)
        BigInt mem[n + 1];
        int i;
        
        //Initializing mem[0] = 0 and mem[1] = 1
        mem[0] = newNum(0, NULL);
        mem[1] = newNum(1, NULL);

        //Calculates the Fibonacci number
        for(i = 2; i < (n+1); i++)
        {
            mem[i] = Add(mem[i-1], mem[i-2]);
        }
        return mem[n];
    }
    
    return 0;
}

