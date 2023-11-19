# 0x12. C - Singly linked lists - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Singly Linked Lists' project. In this module, you will embark on a journey into the world of linked data structures, focusing specifically on singly linked lists in C programming. Singly linked lists provide an elegant way to organize and manipulate dynamic data, allowing for efficient insertion, deletion, and traversal of elements. This repository serves as your comprehensive resource, containing scripts and C programs essential for mastering the creation and manipulation of singly linked lists. Get ready to delve into the fundamentals of linked data structures and enhance your ability to design and implement efficient and dynamic C programs.

## Learning Objectives

By completing this project, you will:

- **Understanding Linked Lists:** Develop a clear understanding of linked lists as a dynamic data structure, focusing on singly linked lists where each element points to the next in the sequence.
- **Node Definition and Initialization:** Learn how to define a linked list node structure and initialize nodes. Understand the structure of a linked list node, which typically includes data and a pointer to the next node.
- **Insertion and Deletion Operations:** Explore the implementation of insertion and deletion operations for singly linked lists. Understand how to add elements at the beginning, end, or a specific position in the list, as well as how to remove elements.
- **Traversal and Searching:** Grasp the techniques for traversing a singly linked list to access, modify, or search for elements. Understand the iterative process of moving from one node to the next until the end of the list is reached.
- **Memory Management:** Learn about memory management in linked lists, including dynamically allocating and deallocating memory for nodes. Understand the importance of proper memory handling to prevent memory leaks.

## Project Structure

The goal of this project is to delve into the implementation and manipulation of singly linked lists in the C programming language. Singly linked lists are fundamental data structures that provide efficient insertion and deletion operations. This project will guide you through various tasks to understand, implement, and manipulate singly linked lists, enhancing your skills in data structure management.

0. **Print list**
    - **[0-print_list.c:](0-print_list.c)** This task involves creating a C function that prints all the elements of a linked list. The function has the prototype `size_t print_list(const list_t *h);` and returns the number of nodes. The elements are printed in a specific format, and if the string (`str`) is NULL, it prints `[0] (nil)`.

1. **List length**
    - **[1-list_len.c:](1-list_len.c)** The objective is to implement a function that returns the number of elements in a linked list. The function has the prototype `size_t list_len(const list_t *h);`. It calculates and returns the count of nodes in the given linked list.

2. **Add node**
    - **[2-add_node.c:](2-add_node.c)** n this task, you are expected to create a function that adds a new node at the end of a linked list. The function has the prototype `list_t *add_node_end(list_t **head, const char *str);` and returns the address of the new element. The string (str) needs to be duplicated, and the function should return NULL if it fails.

3. **Add node at the end**
    - **[3-add_node_end.c:](3-add_node_end.c)** The goal is to implement a function that frees a linked list. The function has the prototype `void free_list(list_t *head);`, and it frees the memory occupied by each node in the linked list.

4. **Free list**
    - **[4-free_list.c:](4-free_list.c)** Write a function that frees a `listint_t` list.

5. **The Hare and the Tortoise (Advanced)**
    - **[100-first.c:](100-first.c)** For this advanced task, you need to write a C program that prints specific lines using the `printf` function before the `main` function is executed. The lines are part of a poetic excerpt: "You're beat! and yet, you must allow, I bore my house upon my back!" This program simulates a race between a tortoise and a hare.

6. **Real programmers can write assembly code in any language (Advanced)**
    - **[101-hello_holberton.asm:](101-hello_holberton.asm)** In this advanced assembly programming task, you are required to write a 64-bit program that prints "Hello, Holberton" using only the `printf` function. The program must be written in assembly language, compiled using `nasm` and `gcc`, and execute without the use of interrupts. The specific commands for compilation are provided in the prompt.

## Resources

### Read or watch:

- [Linked Lists](https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s)
- [Google](https://www.google.com/search?q=licked+list&sca_esv=583768629&sxsrf=AM9HkKnY0zWRWQEQcsiDnCio31SawmBJpw%3A1700396068459&source=hp&ei=JPxZZZmwGpSSxc8Pve6PwA0&iflsig=AO6bgOgAAAAAZVoKNFTEZsqhv0iOwauIOld7affZ6PB-&ved=0ahUKEwiZ0ov9hNCCAxUUSfEDHT33A9gQ4dUDCAo&uact=5&oq=licked+list&gs_lp=Egdnd3Mtd2l6IgtsaWNrZWQgbGlzdDIKEAAYgAQYywEYCjIGEAAYFhgeMggQABgWGB4YDzIIEAAYFhgeGA8yBhAAGBYYHjIIEAAYFhgeGA8yBhAAGBYYHjIIEAAYFhgeGA9I6hVQ7AVY9xRwAXgAkAEAmAHuAaABtQ-qAQUwLjYuNLgBA8gBAPgBAagCCsICBxAjGOoCGCfCAgoQIxiABBiKBRgnwgIEECMYJ8ICERAuGIAEGLEDGIMBGMcBGNEDwgILEAAYgAQYsQMYgwHCAg4QABiABBiKBRixAxiDAcICDhAuGIAEGLEDGMcBGNEDwgIFEC4YgATCAg0QLhiABBgUGIcCGLEDwgIKEC4YgAQYFBiHAsICCBAuGIAEGLEDwgIIEAAYgAQYsQPCAgUQABiABMICCBAAGIAEGMsBwgINEAAYgAQYsQMYgwEYCsICChAAGIAEGLEDGArCAgcQABiABBgKwgIHECMYsQIYJ8ICExAuGIMBGMcBGLEDGNEDGIAEGArCAhAQLhiABBixAxjHARjRAxgKwgINEC4YgAQYsQMYgwEYCsICBBAuGAPCAgcQLhiABBgKwgIIEC4YgAQYywE&sclient=gws-wiz)
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
