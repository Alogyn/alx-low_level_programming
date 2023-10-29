# 0x0C. C - More malloc, free - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - More malloc, free' project. In this project, you will embark on an advanced exploration of dynamic memory allocation in C programming, focusing on further enhancing your understanding of `malloc()` and `free()`. Building upon the basics, you will delve deeper into complex memory management scenarios, exploring advanced techniques for efficient allocation, reallocation, and deallocation of memory. This repository serves as your comprehensive resource hub, providing scripts and C programs essential for mastering the intricacies of memory allocation, empowering you to create sophisticated data structures and memory-efficient applications. Get ready to elevate your programming expertise with advanced dynamic memory management techniques in C.

## Learning Objectives

By completing this project, you will:

- Expand your understanding of dynamic memory allocation by delving into advanced techniques, including allocating memory for multi-dimensional arrays, structs, and complex data structures. Master the art of managing memory for intricate data arrangements.
- Learn to create and manage dynamic data structures, such as dynamic arrays, linked lists, trees, and graphs, using malloc and free. Understand how these structures can grow and shrink dynamically based on program requirements.
- Develop advanced error handling skills related to memory allocation, including checking for NULL pointers after malloc calls, verifying the success of realloc operations, and ensuring proper deallocation to prevent memory leaks and resource wastage.
- Explore the use of the `realloc` function to resize dynamically allocated memory blocks. Understand how realloc can efficiently resize memory while preserving existing data, providing a powerful tool for managing variable-sized data structures.
- Learn optimization strategies for memory allocation, including minimizing the number of malloc and free calls, choosing appropriate data structures and algorithms, and optimizing memory layout to enhance program performance and efficiency.

## Project Structure

This project is designed to advance your skills in dynamic memory allocation and deallocation in C, specifically focusing on `malloc` and `free` functions. Dynamic memory management is crucial for handling complex data structures and optimizing memory usage. By delving into advanced aspects of memory allocation, you will gain a deeper understanding of efficient memory management techniques and their applications in real-world programming scenarios.

0. **Trust no one**
    - **[0-malloc_checked.c:](0-malloc_checked.c)** This task requires you to write a function named `malloc_checked` that allocates memory using `malloc`. If `malloc` fails to allocate the required memory, the function should cause normal process termination with a status value of 98.

1. **string_nconcat**
    - **[1-string_nconcat.c:](1-string_nconcat.c)** In this task, you need to write a function named `string_nconcat` that concatenates two strings. The function should concatenate `n` bytes from the second string (`s2`) to the first string (`s1`). The returned pointer should point to a newly allocated space in memory, containing the concatenated strings. If the function fails, it should return `NULL`.

2. **_calloc**
    - **[2-calloc.c:](2-calloc.c)** This task requires you to write a function named `_calloc` that allocates memory for an array using `malloc`. The function should allocate memory for an array of `nmemb` elements of `size` bytes each and return a pointer to the allocated memory. The allocated memory should be initialized to zero. If `nmemb` or `size` is 0, or if `malloc` fails, the function should return `NULL`.

3. **array_range**
    - **[3-array_range.c:](3-array_range.c)** This task involves writing a function named `array_range` that creates an array of integers containing all the values from `min` to `max`, inclusive. The function should return a pointer to the newly created array. If `min` is greater than `max`, or if `malloc` fails, the function should return `NULL`.

4. **_realloc (Advanced)**
    - **[100-realloc.c:](100-realloc.c)** In this task, you need to write a function named `_realloc` that reallocates a memory block using `malloc` and `free`. The function takes a pointer to a memory block previously allocated with `malloc`, the `old_size` in bytes, and the `new_size` in bytes. The contents of the old memory block are copied to the newly allocated space. If `new_size` is greater than `old_size`, the added memory is not initialized. If `new_size` is equal to `old_size`, the function does nothing and returns the original pointer. If `ptr` is `NULL`, the function is equivalent to `malloc(new_size)`. If `new_size` is 0 and `ptr` is not `NULL`, the function is equivalent to `free(ptr)` and it returns `NULL`.

5. **We must accept finite disappointment, but never lose infinite hope (Advanced)**
    - **[101-mul.c:](101-mul.c)** This task involves writing a program called `mul` that multiplies two positive numbers passed as arguments. The program should print the result followed by a new line. If the number of arguments is incorrect or if the arguments are not valid positive integers, the program should print "Error" followed by a new line and exit with a status of 98.

## Resources

### Read or watch:

- [Do I cast the result of malloc?](https://stackoverflow.com/questions/605845/should-i-cast-the-result-of-malloc)

### man or help:

- `exit (3)`
- `calloc`
- `realloc`

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
