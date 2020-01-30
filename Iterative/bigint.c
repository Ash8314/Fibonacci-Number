#include <stdio.h>
#include "bigint.h"

/*
* TYPE: Record
* The type Record is an abstract type used to create a list.
*/

struct Record {
    int head;
    struct Record *tail;
};

/*
* Function: newInt
* The function creates an abstract type to represent a list.
* It consists of the element head followed by the list tail
*/

BigInt newInt(int first, BigInt last)
{
    BigInt input;
    input = (struct Record*) malloc(sizeof(struct Record));
    input->head = first;
    input->tail = last;
    return input;
}

/*
* FUNCTION: begin
* Returns the head of a list. The head of the list is the first element
* of the list.
*/

int begin(BigInt input)
{
    if (input == NULL)
        printf("Error: NULL List");
    return input->head;
}

/*
* FUNCTION: end
* Returns the tail of a list. The tail of the list is the part
* of list after removing the head of the list.
*/

BigInt end(BigInt input)
{
    if (input == NULL)
        printf("Error: NULL List");
    return input->tail;
}

/*
* FUNCTION: reverse
* Returns a reversed list
*/

BigInt reverse(BigInt input)
{
    //Creating a new BigInt list to store the reversed list
    BigInt newRecord = NULL;
    BigInt nextNode = NULL;
    
    while(input != NULL)
    {
        nextNode = end(input);
        input->tail = newRecord;
        newRecord = input;
        input = nextNode;
    }
    return newRecord;
}

/*
* FUNCTION: newNum
* The function allocates and returns a BigInt struct
*/

BigInt newNum(int info, BigInt value)
{
    return newInt(info, value);
}

/*
* FUNCTION: CarryAdd
* The function to add the numbers n1 and n2 with the carry over number
*/

BigInt CarryAdd(BigInt n1, BigInt n2, int carry)
{
    int sum, temp;
    
    //Checking for n1 and n2 conditions
    if(n1 == NULL && n2 == NULL) {
        if(carry != 0)
            return newNum(carry, NULL);
        else
            return 0;
    }
    else {
        if (n1 != NULL && n2 == NULL) {
            if(carry != 0) {
                temp = begin(n1) + carry;  
                carry = 0;
            }
            else
                temp = begin(n1);
            return newNum(temp, CarryAdd(end(n1), n2, carry));
        }
        else if (n1 == NULL && n2 != NULL)
            return newNum (begin(n2), CarryAdd(n1, end(n2), carry));
    }
    sum = begin(n1) + begin(n2);
    if(carry != 0) {
        sum += carry;
    }
    if(sum > 9) {
        temp = sum % 10;
        carry = 1;
    }
    else {
        carry = 0;
        temp = sum;
    }
    return newNum(temp, CarryAdd(end(n1), end(n2), carry));
}

/*
* FUNCTION: Add
* The function to add the numbers n1 and n2
*/

BigInt Add(BigInt n1, BigInt n2)
{
    BigInt total = CarryAdd(n1, n2, 0);
    return total;
}

/*
* FUNCTION: printNum
* The function to print the contents of the list with the value output
*/

void printNum(BigInt output)
{
    output = reverse(output);
    int ifZero = 0;
    if(begin(output) == 0 && end(output) != NULL)
    {
        output = end(output);
        ifZero = 1;
    }
    
    while (output != NULL)
    {
        if(begin(output) != 0)
        {
            printf("%d", begin(output));
            ifZero = 0;
        }
        else if(begin(output) == 0 && ifZero == 0)
        {
            printf("%d", begin(output));
        }
        output = end(output);
    }
    if(ifZero == 1)
        printf("0");
    printf("\n");
}
