#include <stdio.h>
#include <stdlib.h>
#include "fibonacci.h"

int main()
{
    //Input to find the Fibonacci number
    int numeral;
    BigInt result;
    
    printf("Enter the number: ");
    scanf("%d", &numeral);
    
    //Call the Fibonacci function and store the output in result
    result = Fibonacci(numeral);
    
    printf("F(%d) = ", numeral);
    printNum(result);

    return 0;
}
