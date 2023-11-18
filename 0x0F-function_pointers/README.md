# 0x0F. C - Function pointers - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Function Pointers' project. In this project, you will delve into the powerful and versatile concept of function pointers in C programming. Function pointers allow you to create dynamic and flexible code by enabling functions to be treated as variables. This repository serves as your gateway to understanding the intricacies of function pointers, providing scripts and C programs essential for mastering this advanced C programming feature. Get ready to explore the dynamic possibilities of function pointers, enhancing your ability to create efficient, modular, and extensible C programs.

## Learning Objectives

By completing this project, you will:

- **Understanding Function Pointers:** Develop a clear understanding of what function pointers are and how they enable the use of functions as data, allowing them to be assigned to variables and passed as arguments.
- **Declaration and Initialization:** Learn how to declare and initialize function pointers, specifying the function signature they can point to. Understand the syntax and nuances involved in working with function pointer declarations.
- **Passing Function Pointers as Arguments:** Explore how to pass function pointers as arguments to other functions, allowing for dynamic behavior and increased flexibility in program design.
- **Callback Functions:** Understand the concept of callback functions and how function pointers are used to implement callback mechanisms, providing a way for a function to call back another function.
- **Array of Function Pointers:** Explore the creation and usage of arrays of function pointers, allowing for the dynamic selection and invocation of functions from a predefined set.

## Project Structure

This project is designed to deepen your understanding and mastery of function pointers in the C programming language. Function pointers provide a powerful mechanism for achieving flexibility and modularity in your code. This project will guide you through various tasks to explore the diverse applications of function pointers, from simple callbacks to more complex scenarios.

0. **What's my name**
    - **[0-print_name.c:](0-print_name.c)** Write a function `print_name` that takes a name (string) and a function pointer `f`. The function should print the name using the provided function pointer.

1. **If you spend too much time thinking about a thing, you'll never get it done**
    - **[1-array_iterator.c:](1-array_iterator.c)** Write a function `array_iterator` that iterates over an array of integers, applying a given function (`action`) to each element.

2. **To hell with circumstances; I create opportunities**
    - **[2-int_index.c:](2-int_index.c)** Write a function `int_index` that searches for an integer in an array. It takes an array, its size, and a function pointer (`cmp`) as parameters. It returns the index of the first element for which the comparison function does not return 0.

3. **A goal is not always meant to be reached, it often serves simply as something to aim at**
    - **[3-main.c](3-main.c)**, **[3-op_functions.c](3-op_functions.c)**, **[3-get_op_func.c](3-get_op_func.c)**, **[3-calc.h:](3-calc.h)** Write a program that performs simple operations (+, -, *, /, %) on two integers. The program takes the operator and two numbers as command-line arguments and prints the result. The operations are encapsulated in separate functions.

4. **Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker (Advanced)**
    - **[100-main_opcodes.c:](100-main_opcodes.c)** Write a program that prints the opcodes of its own main function. The program takes the number of bytes as a command-line argument and prints the corresponding opcodes in hexadecimal.

## Resources

### Read or watch:

- [Function Pointer in C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers to functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers in C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [why pointers to functions?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything you need to know about pointers in C](https://boredzo.org/pointers/)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
