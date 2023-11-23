# 0x13. C - More singly linked lists - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - More Singly Linked Lists' project. Building upon your knowledge from the previous module, this project will deepen your understanding of singly linked lists in C programming. You'll explore advanced techniques and concepts, expanding your repertoire for efficiently managing dynamic data structures. This repository is your comprehensive guide, housing scripts and C programs crucial for mastering more sophisticated implementations of singly linked lists. Get ready to further enhance your skills in manipulating linked data structures, unlocking new possibilities for designing versatile and optimized C programs.

## Learning Objectives

By completing this project, you will:

- **Advanced Node Operations:** Explore advanced operations on singly linked lists, such as reversing the list, detecting cycles, and finding the middle element. Understand the algorithms and considerations involved in these operations.
- **Doubly Linked Lists:** Extend your knowledge to doubly linked lists, where each node has pointers to both the next and previous nodes. Learn how to define, initialize, and perform operations on doubly linked lists.
- **Circular Linked Lists:** Understand the concept of circular linked lists, where the last node points back to the first, creating a circular structure. Learn how to work with circular linked lists and their applications.
- **Intersection and Union:** Explore algorithms for finding the intersection and union of two linked lists. Understand how to combine or identify common elements between two linked lists.
- **Skip Lists:** Introduce skip lists as a more advanced data structure, combining elements of linked lists and search trees. Learn about the structure of skip lists and their advantages in search operations.

## Project Structure

This project aims to advance your skills in working with singly linked lists in the C programming language. Building upon the basics, this project will guide you through more complex tasks, such as implementing advanced operations, optimizing the linked list structure, and solving specific challenges associated with linked lists.


0. **Print list**
    - **[0-print_listint.c:](0-print_listint.c)** This task requires implementing a function that prints all the elements of a `listint_t` list. The function is named `print_listint` and returns the number of nodes. The provided example demonstrates the usage.

1. **List length**
    - **[1-listint_len.c:](1-listint_len.c)** In this task, the goal is to implement a function that returns the number of elements in a linked list (`listint_t`). The function is named `listint_len`.

2. **Add node**
    - **[2-add_nodeint.c:](2-add_nodeint.c)** The task is to implement a function that adds a new node at the beginning of a linked list. The function is named `add_nodeint` and returns the address of the new element.

3. **Add node at the end**
    - **[3-add_nodeint_end.c:](3-add_nodeint_end.c)** The objective is to implement a function that adds a new node at the end of a linked list. The function is named `add_nodeint_end` and returns the address of the new element.

4. **Free list**
    - **[4-free_listint.c:](4-free_listint.c)** This task involves implementing a function that frees a `listint_t` list. The function is named `free_listint`.

5. **Free**
    - **[5-free_listint2.c:](5-free_listint2.c)** The goal is to implement a function that frees a `listint_t` list and sets the head to NULL. The function is named `free_listint2`.

6. **Pop**
    - **[6-pop_listint.c:](6-pop_listint.c)** This task requires implementing a function that deletes the head node of a `listint_t` linked list and returns the head node’s data.

7. **Get node at index**
    - **[7-get_nodeint.c:](7-get_nodeint.c)** The goal is to implement a function that returns the nth node of a `listint_t` linked list, given the index.

8. **Sum list**
    - **[8-sum_listint.c:](8-sum_listint.c)** In this task, the objective is to implement a function that returns the sum of all the data (n) of a `listint_t` linked list.

9. **Insert**
    - **[9-insert_nodeint.c:](9-insert_nodeint.c)** The task involves implementing a function that inserts a new node at a given position in a `listint_t` linked list.

10. **Delete at index**
    - **[10-delete_nodeint.c:](10-delete_nodeint.c)** The goal is to implement a function that deletes the node at a given index in a `listint_t` linked list.

11. **Reverse list (Advanced)**
    - **[100-reverse_listint.c:](100-reverse_listint.c)** This task requires implementing a function that reverses a `listint_t` linked list.

12. **Print (safe version) (Advanced)**
    - **[101-print_listint_safe.c:](101-print_listint_safe.c)** The goal is to implement a function that prints a `listint_t` linked list in a safe manner, handling cases where the list contains a loop.

13. **Free (safe version) (Advanced)**
    - **[102-free_listint_safe.c:](102-free_listint_safe.c)** Safely frees a `listint_t` linked list, preventing memory leaks. This function can handle lists with a loop and traverses the list only once.

14. **Find the loop (Advanced)**
    - **[103-find_loop.c:](103-find_loop.c)** Finds the loop in a `listint_t` linked list using Floyd's cycle-finding algorithm. It returns the address of the node where the loop starts or `NULL` if there is no loop.


## Resources

### Read or watch:

- [Google](https://www.google.com/search?q=linked+list+C&sca_esv=584824679&sxsrf=AM9HkKm8lmkM-_LjmIO27rRfsj-CmM-_3Q%3A1700735157171&source=hp&ei=tShfZcKGCPynkdUPyryp-AI&iflsig=AO6bgOgAAAAAZV82xWCunnSaTrz8UVZCL_XekwDXStax&ved=0ahUKEwiCtZeX9NmCAxX8U6QEHUpeCi8Q4dUDCAo&uact=5&oq=linked+list+C&gs_lp=Egdnd3Mtd2l6Ig1saW5rZWQgbGlzdCBDMggQABiABBjLATIFEAAYgAQyCBAAGIAEGMsBMggQABiABBjLATIIEAAYgAQYywEyCBAAGIAEGMsBMggQABiABBjLATIIEAAYgAQYywEyCBAAGIAEGMsBMggQABiABBjLAUiaJVDcDVjMInABeACQAQCYAb4BoAHLEaoBBDAuMTO4AQPIAQD4AQGoAgrCAgcQIxjqAhgnwgIKECMYgAQYigUYJ8ICBBAjGCfCAhEQLhiABBixAxiDARjHARjRA8ICCxAAGIAEGLEDGIMBwgIOEAAYgAQYigUYsQMYgwHCAggQLhiABBixA8ICBRAuGIAEwgILEC4YgAQYsQMYgwHCAg4QLhiABBixAxjHARjRA8ICERAuGIMBGMcBGLEDGNEDGIAEwgIIEAAYgAQYsQPCAg0QLhiABBjHARjRAxgKwgIIEC4YgAQYywHCAgcQABiABBgKwgIKEAAYgAQYywEYCg&sclient=gws-wiz)
- [Youtube](https://www.youtube.com/results?search_query=linked+lists)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
