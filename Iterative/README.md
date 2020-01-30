Part I

Write two functions, preferably in C or C++, that both take an integer n and return the nth number in the Fibonacci sequence, i.e. fib(1) should return 1 and fib(10) should return 55.  One function should implement a recursive algorithm, the other should implement an iterative algorithm.  Expect inputs up to n=100.   Please ensure code can be compiled and provide code files and header files if needed.  Treat this problem as if the code is to be released to production and include anything you think is appropriate.

Iterative approach with memoization
- This approach is the preferred and faster way to find the Fibonacci number. To find the Fibonacci number: sum of the 2 previous numbers is equals to the number.
- With memoization, the function does not run more than once for the same inputs by keeping a record of the results for the given inputs. Here the arrays are used as the record.
- As the code iterates through the function only once, the time and space complexity is O(N).
- I started by implementing the code with int data type. The stack overflow started from F(47) since int data type has 4 bytes, the maximum value that int can hold is (2^31-1).
- Then I tried the unsigned long long data type. It has 8 bytes. The maximum value it can hold is (2^63-1), the stack overflow started at F(93).
- To calculate and store values from F(94), I needed a data type big enough to store values greater than 2^64. After some research I decided to use the BigInt library. I used the relevant parts of the library to write the bigint.h and bigint.c files.
- Using the BigInt library, the Fibonacci numbers was calculated for values greater than F(93). The library uses linked lists for its operations.
