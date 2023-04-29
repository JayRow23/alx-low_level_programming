0x13. C - More singly linked lists
 By: Julien Barbier

Tasks
0. Print list
mandatory
Write a function that prints all the elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Directory: 0x13-more_singly_linked_lists
File: 0-print_listint.c


1. List length
mandatory
Write a function that returns the number of elements in a linked listint_t list.

Prototype: size_t listint_len(const listint_t *h);
File: 1-listint_len.c


2. Add node
mandatory
Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
File: 2-add_nodeint.c


3. Add node at the end
mandatory
Write a function that adds a new node at the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
File: 3-add_nodeint_end.c


4. Free list
mandatory
Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);
File: 4-free_listint.c


5. Free
mandatory
Write a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
File: 5-free_listint2.c


6. Pop
mandatory
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Prototype: int pop_listint(listint_t **head);
6-pop_listint.c


7. Get node at index
mandatory
Write a function that returns the nth node of a listint_t linked list.
File: 7-get_nodeint.c


8. Sum list
mandatory
Write a function that returns the sum of all the data (n) of a listint_t linked list.

Prototype: int sum_listint(listint_t *head);
File: 8-sum_listint.c


9. Insert
mandatory
Write a function that inserts a new node at a given position.

Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
File: 9-insert_nodeint.c


10. Delete at index
mandatory
Write a function that deletes the node at index index of a listint_t linked list.

Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
10-delete_nodeint.c


11. Reverse list
#advanced
Write a function that reverses a listint_t linked list.

Prototype: listint_t *reverse_listint(listint_t **head);
100-reverse_listint.c


12. Print (safe version)
#advanced
Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
101-print_listint_safe.c


13. Free (safe version)
#advanced
Write a function that frees a listint_t list.

Prototype: size_t free_listint_safe(listint_t **h);
File: 102-free_listint_safe.c


14. Find the loop
#advanced
Write a function that finds the loop in a linked list.

Prototype: listint_t *find_listint_loop(listint_t *head);
File: 103-find_loop.c

