# 0x17. C - Doubly linked lists - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Doubly Linked Lists' project. In this module, you will extend your understanding of linked data structures by delving into the world of doubly linked lists in C programming. Doubly linked lists offer increased flexibility with bidirectional traversal, enabling efficient operations like insertions, deletions, and manipulations. This repository serves as your comprehensive resource, containing scripts and C programs essential for mastering the creation and manipulation of doubly linked lists. Get ready to deepen your knowledge of linked data structures and enhance your ability to design dynamic and versatile C programs.

## Learning Objectives

By completing this project, you will:

- **Understanding Doubly Linked Lists:** Develop a clear understanding of doubly linked lists, where each node has pointers to both the next and the previous nodes in the sequence.
- **Node Definition and Initialization:** Learn how to define a doubly linked list node structure and initialize nodes. Understand the structure of a doubly linked list node, which typically includes data, a pointer to the next node, and a pointer to the previous node.
- **Insertion and Deletion Operations:** Explore the implementation of insertion and deletion operations for doubly linked lists. Understand how to add elements at the beginning, end, or a specific position in the list, as well as how to remove elements.
- **Traversal and Searching:** Grasp the techniques for traversing a doubly linked list to access, modify, or search for elements. Understand the bidirectional nature of traversal, moving both forward and backward within the list.
- **Memory Management:** Learn about memory management in doubly linked lists, including dynamically allocating and deallocating memory for nodes. Understand the importance of proper memory handling to prevent memory leaks.

## Project Structure

This project aims to build on your knowledge of linked lists by exploring doubly linked lists in the C programming language. Doubly linked lists provide additional flexibility by allowing traversal in both directions. This project will guide you through tasks to understand, implement, and manipulate doubly linked lists efficiently.

0. **Print list**
    - **[0-print_dlistint.c:](0-print_dlistint.c)** Write a function `print_dlistint` that prints all the elements of a doubly linked list (`dlistint_t`). The function should return the number of nodes in the list.

1. **List length**
    - **[1-dlistint_len.c:](1-dlistint_len.c)** Write a function `dlistint_len` that returns the number of elements in a doubly linked list (`dlistint_t`).

2. **Add node**
    - **[2-add_dnodeint.c:](2-add_dnodeint.c)** Write a function `add_dnodeint` that adds a new node at the beginning of a doubly linked list (`dlistint_t`). The function should return the address of the new element or `NULL` if it fails.

3. **Add node at the end**
    - **[3-add_dnodeint_end.c:](3-add_dnodeint_end.c)** Write a function `add_dnodeint_end` that adds a new node at the end of a doubly linked list (`dlistint_t`). The function should return the address of the new element or `NULL` if it fails.

4. **Free list**
    - **[4-free_dlistint.c:](4-free_dlistint.c)** Write a function `free_dlistint` that frees a doubly linked list (`dlistint_t`).

5. **Get node at index**
    - **[5-get_dnodeint.c:](5-get_dnodeint.c)** Write a function `get_dnodeint_at_index` that returns the nth node of a doubly linked list (`dlistint_t`). The index starts at 0, and if the node does not exist, the function should return `NULL`.

6. **Sum list**
    - **[6-sum_dlistint.c:](6-sum_dlistint.c)** Write a function `sum_dlistint` that returns the sum of all the data (n) of a doubly linked list (`dlistint_t`). If the list is empty, the function should return 0.

7. **Insert at index**
    - **[7-insert_dnodeint.c:](7-insert_dnodeint.c)** Write a function `insert_dnodeint_at_index` that inserts a new node at a given position in a doubly linked list (`dlistint_t`). The index starts at 0, and the function should return the address of the new node or `NULL` if it fails.

8. **Delete at index**
    - **[8-delete_dnodeint.c:](8-delete_dnodeint.c)** Write a function `delete_dnodeint_at_index` that deletes the node at a given index in a doubly linked list (`dlistint_t`). The index starts at 0, and the function should return 1 if it succeeded, -1 if it failed.

9. **Crackme4 (Advanced)**
    - **[100-password:](100-password)** Find the password for a program named `crackme4` and save the password in a file named `100-password`.

10. **Palindromes (Advanced)**
    - **[102-result:](102-result)** Find the largest palindrome made from the product of two 3-digit numbers and save the result in a file named `102-result`.

11. **crackme5 (Advanced)**
    - **[103-keygen.c:](103-keygen.c)** rite a keygen for `crackme5`. The keygen should be able to generate a valid key for a given username, and the usage should be `./keygen5 username`. The keygen should print a valid key for the specified username.

## Resources

### Read or watch:

- [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
