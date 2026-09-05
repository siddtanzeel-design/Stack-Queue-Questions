# Stack-Queue-Questions

->`STACK`

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
