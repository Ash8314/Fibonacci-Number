#include <stdio.h>
#include <stdlib.h>

/*
 * This library is for storing and displaying numbers that exceed the range supported by
 * the regular data types like int, char, double, long, unsigned long long. It is called
 * BigInt datatype.
 */


/*
 * TYPE: Record
 * The type Record is an abstract type used to store a number of undefined size.
 */

typedef struct Record *BigInt;

/*
* FUNCTION: newInt
* The function allocates and returns a new list.
*/

BigInt newInt(int first, BigInt last);

/*
* FUNCTION: begin
* The function returns the head of the list.
*/

int begin(BigInt input);

/*
* FUNCTION: end
* The function returns the tail of the list.
*/

BigInt end(BigInt input);

/*
* FUNCTION: reverse
* The function to reverse the list
*/

BigInt reverse(BigInt input);

/*
* FUNCTION: newNum
* The function allocates and returns a new BigInt list
*/

BigInt newNum(int info, BigInt value);

/*
* FUNCTION: CarryAdd
* The function to add the numbers n1 and n2 with carry over number
*/

BigInt CarryAdd(BigInt n1, BigInt n2, int carry);

/*
* FUNCTION: Add
* The function to add the numbers n1 and n2 and returns the sum
*/

BigInt Add(BigInt n1, BigInt n2);

/*
* FUNCTION: printNum
* The function to print the contents of the list with the value
*/

void printNum(BigInt output);

