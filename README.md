# Recursion-in-CPP

# Aim:

To study and implement Recursion in C++ for problem-solving, code simplification, and efficient computation of repetitive tasks.

# Tools Used:

IDE, C++ compiler, recursive functions, function call stack.

# Theory:

In C++, Recursion is a technique where a function calls itself directly or indirectly to solve a problem. It breaks down a larger problem into smaller subproblems until a base condition is reached.

Recursion is useful for problems that can be divided into smaller, similar subproblems (e.g., factorial, sum of numbers, tree traversal).

A base case is required to terminate recursion and prevent infinite calls.

Each recursive call is stored in the function call stack, and execution resumes after returning from the recursive calls.

🔹 Key Features of Recursion:

Provides a clean and logical way to solve divide-and-conquer problems.

Reduces code size compared to iterative approaches.

Each call is independent and uses the call stack for execution.

Requires careful handling of base cases to avoid stack overflow.

🔹 Syntax of Recursion in C++:
```
return_type function_name(parameters) {
    if(base_condition) {
        // stopping condition
        return value;
    } else {
        // recursive call
        return function_name(modified_parameters);
    }
}
```

🔹 Types of Recursion:

Direct Recursion – A function calls itself directly.

Indirect Recursion – A function calls another function, which eventually calls the first function.

Tail Recursion – The recursive call is the last statement in the function.

Non-tail Recursion – The recursive call is followed by some other operations.

🔹 Advantages of Recursion:

Simplifies code for complex problems like tree/graph traversal.

Closer to mathematical definitions (e.g., factorial, sum of numbers).

Easier to write and understand for divide-and-conquer problems.

🔹 Disadvantages of Recursion:

Uses more memory due to function call stack.

Slower compared to iteration in some cases.

Risk of stack overflow if base case is missing.

# Factorial Program (Recursion):

This program calculates the factorial of a number using recursion. The base case checks if the number is 0 or 1. Otherwise, the function calls itself with n-1 until the base case is reached.

ALGORITHM:
1> Start
2> Declare variable n to store input.
3> Define a recursive function fact(n).
4> If n <= 1, return 1.
5> Else, return n * fact(n-1).
6> Display the result.
7> End

# Sum of Natural Numbers (Recursion):

This program calculates the sum of the first n natural numbers using recursion. The base case checks if n is 0, and recursion continues until the base case is reached.

ALGORITHM:
1> Start
2> Declare variable n to store input.
3> Define a recursive function sum(n).
4> If n == 0, return 0.
5> Else, return n + sum(n-1).
6> Display the result.
7> End

# Conclusion:

Recursion in C++ provides a structured way to solve problems by dividing them into smaller subproblems. It is particularly effective for mathematical computations, data structures, and divide-and-conquer algorithms. By using base conditions, recursion avoids infinite loops and ensures program correctness. While recursion simplifies logic and improves readability, it must be applied carefully to avoid excessive memory use and stack overflow errors.
