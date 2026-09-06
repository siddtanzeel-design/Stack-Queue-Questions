# Stack-Queue-Questions

## Stack

### 1. Implementing Stack using Array

* In this program, we're implementing a **Stack using an Array**.
* The `Stack` class contains an array, `top`, and `size` to manage the stack.
* The `push()` function adds an element to the top of the stack and checks for **Stack Overflow**.
* The `pop()` function removes the top element and checks for **Stack Underflow**.
* The `display()` function displays the elements starting from the top of the stack.
* The stack follows the **LIFO (Last In, First Out)** principle.
* Added `peek()` function that will simply display the element that is currently at the top.

### 2. Reversing a String using Stack

* In this program, we're reversing a string using a **Stack**.
* The Stack stores each character of the string using the `push()` function.
* The `pop()` function removes and returns the character from the top of the stack.
* Since a Stack follows **LIFO (Last In, First Out)**, the characters are retrieved in reverse order.
* The `pop()` function returns `'\0'` if the stack is empty.
* The reversed string is displayed by repeatedly popping characters from the stack.

### 3. Checking Palindrome using Stack

* In this program, we're checking whether a string is a **palindrome using a Stack**.
* The original string is stored separately for comparison.
* Each character of the string is pushed into the Stack.
* The characters are then popped from the Stack to create the reversed string.
* Since a Stack follows **LIFO (Last In, First Out)**, the characters are retrieved in reverse order.
* The original string and reversed string are compared to determine whether the string is a palindrome.

### 4. Checking Balanced Parentheses using Stack

* In this program, we're checking whether brackets in a string are **balanced using a Stack**.
* Opening brackets `(`, `{`, `[` are pushed into the Stack.
* When a closing bracket `)`, `}`, `]` is found, the top element of the Stack is popped and checked for a matching opening bracket.
* If the brackets don't match, the string is **not balanced**.
* If a closing bracket is found when the Stack is empty, the string is also **not balanced**.
* At the end, the Stack must be empty for the brackets to be balanced.
* The Stack follows the **LIFO (Last In, First Out)** principle.

### 5. Infix to Postfix using Stack

#### Algorithm

1. Start.
2. Create an empty Stack to store operators.
3. Create an empty string `result` to store the postfix expression.
4. Read the infix expression from left to right.
5. If the current character is an **operand** (letter or number), add it directly to `result`.
6. If the current character is an **operator**:

   * Check the precedence of the operator.
   * If the Stack is not empty and the operator at the top has higher or equal precedence, pop it and add it to `result`.
   * Push the current operator into the Stack.
7. Repeat steps 5–6 until the entire expression has been scanned.
8. Pop all remaining operators from the Stack and add them to `result`.
9. Display `result` as the postfix expression.
10. Stop.

### 6. Infix to Prefix using Stack

#### Algorithm

1. Start.
2. Read the infix expression.
3. Reverse the infix expression.
4. Convert the reversed expression into **Postfix** using the operator Stack and precedence rules.
5. Reverse the resulting Postfix expression.
6. The reversed expression is the **Prefix expression**.
7. Display the Prefix expression.
8. Stop.


## Queue
