Learning more about singly linked lists as our selection from other data structure.

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

12. Print (safe version)
Write a function that prints a listint_t linked list.

13. Free (safe version)
Write a function that frees a listint_t list.

14. Find the loop
Write a function that finds the loop in a linked list.

****.......................End.......................****
