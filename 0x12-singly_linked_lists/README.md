**INTRODUCTION**
Singly linked lists as simple linked list which link nodes in forward direction only.

**PROJECT QUESTIONS:**

***#MANDATORY***
0. **Print list:**
"A function that prints all the elements of a list_t list, and it returns number of nodes."

1. **List length:**
A function that returns the number of elements in a linked list_t list.

2. **Add node:**
A function that adds a new node at the beginning of a list_t list.

3. **Add node at the end:**
A function that adds a new node at the end of a list_t list.

4. **Free list:**
A function that frees a list_t list.

**Code Explaination:**
*In the context of this code, head->str refers to the string field of a list_t node pointed to by the head pointer.*

The list_t struct likely has multiple fields, and one of them is a string field named str.
The free_list function is intended to free a linked list of list_t nodes,
and so it iterates over the list, freeing each node's str field using free(head->str).
This is necessary because any dynamically allocated memory used to store the string needs to be freed before freeing the memory allocated for the node itself using free(head).

***#ADVANCED***
5. **The Hare and the Tortoise:**
A function that prints "*You're beat! and yet, you must allow,\nI bore my house upon my back!\n*" before the main function is executed.

**Code Explaination:**
In this implementation, the **_/_attribute_/_((constructor))** attribute is used to mark the **"before_main" function** as a **constructor** function.
**A constructor function** is automatically called before the **main** function is executed.

Inside the **before_main** function, the desired message is printed using the printf function.
This message will be printed to the console before the main function is executed.

6. **Real programmers can write assembly code in any language:**
Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

**Code Explaination:**
In the context of assembly language, db stands for "define byte". In this case, hello db 'Hello, Holberton!', 10, 0 defines a byte array named hello in the data section of the program.

Each character in the string is represented by its ASCII code, which is an integer value between 0 and 127.

Full forms of the abbreviations used in the code:

rbp: The base pointer register
rsp: The stack pointer register
lea: Load effective address
xor: Exclusive OR
pop: Pop a value from the stack
rdi: The first argument register
ret: Return from a subroutine
push: Push a value onto the stack
eax: The accumulator register
mov: Move a value between registers or memory locations

**********End!!!**********
