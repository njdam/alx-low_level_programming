***INTRODUCTION***
A singly linked list is a type of data structure used in computer science to store a sequence of elements, such as integers or strings. In a singly linked list, each element is stored in a node that contains two parts: a value and a pointer to the next node in the sequence. The first node in the list is called the head, and the last node points to NULL to indicate the end of the list.

This type of linked list is called "singly" because each node has only one pointer, which points to the next node in the sequence. 
This makes singly linked lists easy to implement and efficient for many operations such as insertion and deletion at the front of the list, but it can be less efficient for operations that require accessing elements in reverse order or accessing elements by index. Singly linked lists are often used as the basis for more complex data structures, such as stacks and queues.

Learning more about singly linked lists as our selection from other data structure by answering the following questions.

**MANDATORY QUESTION**
0. Print list
Write a function that prints all the elements of a listint_t list.

1. List length
Write a function that returns the number of elements in a linked listint_t list.

2. Add node
Write a function that adds a new node at the beginning of a listint_t list.

3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.

4. Free list
Write a function that frees a listint_t list.

5. Free
Write a function that frees a listint_t list.

6. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

7. Get node at index
Write a function that returns the nth node of a listint_t linked list.

8. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list.

9. Insert
Write a function that inserts a new node at a given position.

*code explaination:*
This portion of the code is responsible for inserting the new node at the specified position in the linked list:
new_node->next = current_node->next;
current_node->next = new_node;
When inserting a new node, we need to update the next pointer of the node that comes before it (i.e., the node at position idx-1) and the next pointer of the new node itself.

To do this, we first set the next pointer of the new node (new_node->next) to the next pointer of the current node (current_node->next). This is because we want to insert the new node after the current node, so we need to link the new node to the rest of the list after the current node.

Next, we update the next pointer of the current node (current_node->next) to point to the new node. This is because the new node should come after the current node.

Finally, the function returns a pointer to the new node to indicate that the insertion was successful.

**Note that:** if current_node is NULL, it means that the specified position idx is invalid (i.e., greater than the length of the list), so the function frees the new node and returns NULL to indicate that the insertion failed.

10. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
*code explaination:*
This code is used to delete the node after the current node in a singly linked list. Here is a detailed explanation of each line of code:
tmp = current->next;
This line creates a temporary pointer tmp that points to the node that comes after the current node (current).
We need to create this temporary pointer so that we can free the memory allocated for the node that we are deleting.

current->next = tmp->next;
This line updates the next pointer of the current node to skip over the node that we are deleting (i.e., the node that tmp points to). This effectively removes the node from the linked list.

free(tmp);
This line frees the memory allocated for the node that we are deleting. We no longer need this node since we have removed it from the list.

Overall, this code effectively deletes the node that comes after the current node, and updates the next pointer of the current node to maintain the integrity of the linked list. Note that this code assumes that the current node is not the last node in the list (i.e., it has a non-NULL next pointer). If the current node is the last node, then we cannot delete any node after it.

**ADVANCED QUESTIONS**
11. Reverse list
Write a function that reverses a listint_t linked list.

***code explaination:***
This code defines a function called reverse_listint which takes a double pointer to the head of a singly linked list. It then reverses the order of the nodes in the list and returns a pointer to the new head of the list.

The function starts by defining two pointers `next` and `previous` as `NULL`. It then enters a while loop, which will continue until there are no more nodes in the list. Within the loop, it sets **next** to point to the next node in the list, `(*head)->next` is set to point to previous (**the previous node**), and **previous** is set to point to the current node ``(*head)``. Finally, `*head` is set to point to **next**, which moves the pointer to the next node in the list.

Once the loop has finished, `*head` is set to point to ``previous``, which is now the new head of the reversed list. The function then returns the new head of the list.

12. Print (safe version)
Write a function that prints a listint_t linked list.

***code explaination:***
**In function:** ***uniq_node_count***
This function counts the **number of unique nodes** in a looped linked list. It takes a pointer to the head of the linked list as its argument and returns the number of **unique nodes** in the list. The function uses the ***Floyd's cycle-finding algorithm***, also known as the "**tortoise and hare**" *algorithm*, to detect the presence of a loop in the list. If a loop is detected, it determines the length of the loop by counting the number of nodes in the loop. If there is no loop in the list, the function returns 0.

**In function:** ***print_listint_safe***
This function prints the elements of a linked list. It takes a pointer to the head of the linked list as its argument and returns the number of nodes in the list. The function first calls **uniq_node_count** to determine whether the list contains a loop. If the list does not contain a loop, the function prints the elements of the list normally, one element per line, along with the address of each element. If the list contains a loop, the function prints the elements of the list up to the point where the loop starts, followed by an arrow pointing to the element where the loop starts, and then the elements of the loop, one element per line, along with the address of each element.

13. Free (safe version)
Write a function that frees a listint_t list.

***code explaination:***
This code defines a function called free_listint_safe which is used to safely free all the nodes in a singly linked list of integers.

The function takes a pointer to a pointer of the head of the list as its parameter. It first checks if the pointer to the head or the head itself is NULL, in which case it returns 0 indicating that there are no nodes to free. If the head is not NULL, the function then iterates through the list by updating the head to point to the next node and freeing the previous node until the entire list has been freed.

*To ensure the function does not attempt to free an already freed node in the list, the function checks the difference between the current node and the next node in the list. If the difference is less than or equal to zero, it means that the current node has already been freed before and the function frees the current node and breaks out of the loop.*

14. Find the loop
Write a function that finds the loop in a linked list.

***code explaination:***
To find the loop in a linked list, we can use the ***Floyd's cycle-finding algorithm***, also known as the "**tortoise and hare**" *algorithm*. This algorithm uses two pointers, one moving one step at a time (**tortoise** as **x** in a code) and the other moving two steps at a time (**hare** as **y** in a code). If there is a loop in the list, the hare will eventually catch up to the tortoise, and they will meet at a node inside the loop.

Once the hare and tortoise meet, we can move one of the pointers (as **x** in a code) back to the head of the list and start moving both pointers one step at a time until they meet again. The node where they meet is the start of the loop.

If there is no loop in the list, the hare will eventually reach the end of the list, and the loop will terminate. In this case, we return NULL.

If there is a loop in the list, the hare will eventually catch up to the tortoise, and they will meet at a node inside the loop. In this case, we move one of the pointers (tortoise) back to the head of the list and start moving both pointers one step at a time until they meet again. The node where they meet is the start of the loop, and we return it.

****.......................End.......................****
