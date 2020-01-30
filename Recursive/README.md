Part II
From your implementation of the above two functions (recursive and iterative), which would you use in an actual release?  For the version you wouldn’t choose, please include your reasons why you wouldn’t use it.  Is there any situation you can think of where you would use the ‘bad’ version? (might need to be a little creative here)

- For actual release, I would use the iterative method as its quicker, more reliable and precise. The time and space complexity of the iterative approach is good and there is no overhead.
        
- The Recursive version was not chosen. It is because:
     - Recursive calls add overhead.
     - The recursive function makes redundant calls(repeated) by compiling the same values over and over again.
     - The compiler creates a stack for each function and it continues until base case is reached. As the data size increases, the  
       compiler needs large stack segment to execute the function call.
     - The poor performance is due to the heavy push-pop of the stack memory in each recursive call.
 
 - Situation where the Recursive version are used:
        - It can be used when there is limited data or small range of numbers.
        - It can be used for training/demo purposes.
