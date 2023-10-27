# 0x0B. C - malloc, free - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - malloc, free' project. In this project, you will delve into dynamic memory allocation in C programming, exploring the functions `malloc()` and `free()`. Dynamic memory allocation allows programs to manage memory at runtime, enabling the creation and manipulation of data structures with varying sizes and lifetimes. This repository serves as your comprehensive guide, containing scripts and C programs essential for understanding the concepts of memory allocation, deallocation, and memory management strategies. Get ready to enhance your programming capabilities by mastering the dynamic memory allocation techniques provided by `malloc()` and `free()`, empowering you to create more efficient and flexible C programs.

## Learning Objectives

By completing this project, you will:

- Understand the concept of dynamic memory allocation in C programming and how functions like `malloc` are used to allocate memory at runtime, allowing for flexible data storage.
- Learn the importance of deallocating memory using the `free` function to prevent memory leaks in your programs. Grasp the significance of releasing allocated memory back to the system after its use.
- Explore best practices for dynamic memory management, including initializing pointers, checking for allocation failures, and ensuring proper deallocation to avoid memory leaks and dangling pointers.
- Understand how dynamic memory allocation is essential for creating dynamic data structures like linked lists, trees, and graphs. Master the techniques for allocating memory for nodes and elements within these data structures.
- Develop skills in error handling related to dynamic memory allocation, such as checking for NULL pointers after malloc calls and handling memory allocation failures gracefully to prevent program crashes and unexpected behavior.

## Project Structure

The goal of this project is to master the dynamic memory allocation techniques in C using `malloc` and `free`. Dynamic memory management is fundamental for creating flexible and efficient programs, allowing allocation and deallocation of memory at runtime. This project is designed to provide comprehensive insights into the usage of `malloc` and `free`, enabling you to write memory-efficient C programs.

0. **Float like a butterfly, sting like a bee**
    - **[0-create_array.c:](0-create_array.c)** Write a function that creates an array of chars and initializes it with a specific char. The function takes two parameters: `size` (unsigned int) and `c` (char). It should return a pointer to the allocated memory. If `size` is 0, the function should return NULL. If `malloc` fails, it should also return NULL.

1. **The woman who has no imagination has no wings**
    - **[1-strdup.c:](1-strdup.c)** Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. The function takes a parameter `str` (a string) and returns a pointer to the duplicated string. If `str` is NULL, the function should return NULL. The memory for the new string is obtained with `malloc`, and can be freed with `free`.

2. **He who is not courageous enough to take risks will accomplish nothing in life**
    - **[2-str_concat.c:](2-str_concat.c)** Write a function that concatenates two strings. The function takes two parameters: `s1` and `s2` (both strings). It should return a pointer to a newly allocated space in memory containing the concatenated string. If `NULL` is passed, treat it as an empty string. The function should return NULL on failure.

3. **If you even dream of beating me you'd better wake up and apologize**
    - **[3-alloc_grid.c:](3-alloc_grid.c)** Write a function that returns a pointer to a 2-dimensional array of integers. The function takes two parameters: `width` (width of the grid) and `height` (height of the grid). It should initialize each element of the grid to 0. If `width` or `height` is 0 or negative, the function should return NULL.

4. **It's not bragging if you can back it up**
    - **[4-free_grid.c:](4-free_grid.c)** Write a function that frees a 2-dimensional grid previously created by the `alloc_grid` function. The function takes two parameters: `grid` (a pointer to the 2D array) and `height` (height of the grid). It should free the memory allocated for the grid.

5. **It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe (Advanced)**
    - **[100-argstostr.c:](100-argstostr.c)** Write a function that concatenates all the arguments passed to the program. The function takes two parameters: `ac` (an integer, representing the number of arguments) and `av` (an array of strings, representing the arguments). It should return a pointer to a new string, where each argument is followed by a newline character. If `ac` is 0 or `av` is NULL, the function should return NULL.

6. **I will show you how great I am (Advanced)**
    - **[101-strtow.c:](101-strtow.c)** Write a function that splits a string into words. The function takes a parameter `str` (a string). It should return a pointer to an array of strings (words). Each element of the array should contain a single word, null-terminated. The last element of the returned array should be NULL. Words in the input string are separated by spaces. If the input string is NULL or empty, the function should return NULL. If the function fails, it should return NULL.

## Resources

### Read or watch:

- [0x0a - malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231027%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231027T212502Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b8b2af5e2349a3788a34325232299c5fada3a1cc6bca58526a3214fbde83ee46)
- [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64) (stop at 6:50)

### man or help:

- `malloc`
- `free`

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
