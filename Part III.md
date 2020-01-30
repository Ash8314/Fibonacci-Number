Part III (optional)
If you’re still enjoying this - what would you do to optimize the code? (think both for a single function call as well as over the long term)  What’s the cost for doing so?

- One method for optimization is the iterative method with space complexity.
- The values are stored in variables instead of an array.
- Cost: Avoids the excessive use of memory space in the stack.
- This method is good for a single function call as well as over long term.
    Pseudo Code
    Function (n)
      x = 1, y = 1;
      for i<--2 to n do
        sum = x + y
        x = y
        y = sum
      return y
- Time complexity = O(N)
- Space complexity = O(1)

- Another approach is to use a combination of iterative and recursive functions. This can be used in the Fast Doubling method.
- It uses the formulae:
       F(2n) = F(n)[2*F(n+1)-F(n)]
       F(2n+1) = (F(n)**2) + (F(n+1)**2)
- Tail recursion can be used since it keeps only one function call in the stack at any point in time.
