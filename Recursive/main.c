#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main()
{
    //Input to find the Fibonacci number
    int numeral, result;
    printf("Enter the number: ");
    scanf("%d", &numeral);
    
    if(numeral < 0)
    {
        printf("ERROR! Negative Number\n");
    }
    else
    {
        //Call the Fibonacci function and store the output in result
        result = Fibo_Recursive(numeral);
        printf("Result = %d\n", result);
    }
    
    return 0;
}
