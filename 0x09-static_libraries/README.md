# 0x09. C - Static libraries - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Static libraries' project. In this project, you will venture into the world of static libraries in C programming. Static libraries are collections of precompiled functions and code snippets that can be reused across multiple programs, simplifying the development process and improving efficiency. This repository serves as your gateway to mastering the creation and utilization of static libraries. Here, you will find scripts and C programs essential for understanding the creation, linking, and usage of these powerful libraries. Get ready to enhance your coding practices and streamline your projects with the efficiency of static libraries in C.

## Learning Objectives

By completing this project, you will:

- Understand how to create static libraries by compiling multiple source files into a single archive file (.a), enabling the reuse of code across different programs.
- Learn how to link your C programs with static libraries during compilation, allowing you to leverage precompiled functions and modules, reducing compilation time and promoting modular code design.
- Master the skill of organizing functions into separate source files and header files, promoting modularity and maintainability in your C projects.
- Explore the creation of Makefiles to automate the compilation and linking processes, ensuring consistency and efficiency in building projects that utilize static libraries.
- Gain proficiency in handling errors related to library linkage, symbol conflicts, and version compatibility, ensuring smooth integration of static libraries into your C projects.

## Project Structure

The purpose of this project is to deepen your understanding and expertise in working with static libraries in the C programming language. Static libraries are essential for code modularity and reuse, making it crucial for programmers to grasp the nuances of their creation and utilization. This project comprises a series of tasks meticulously designed to explore advanced aspects of static libraries, enabling you to harness their power effectively.

0. **A library is not a luxury but one of the necessities of life**
    - **[libmy.a, ](libmy.a)****[main.h:](main.h)** The task involves creating a static library named `libmy.a` containing various functions. These functions include basic operations like string manipulations, character checks, and memory functions. The `ar` command is used to create the library, and `nm` is utilized to list the symbols contained within it. A test program (`main.c`) is also provided, which demonstrates the usage of the library.

1. **Without libraries what have we? We have no past and no future**
    - **[create_static_lib.sh:](create_static_lib.sh)** In this task, a shell script called `create_static_lib.sh` is created. This script automates the process of compiling and archiving the source files (`.c` files) into a static library named `liball.a`. The script checks for all `.c` files in the current directory, compiles them into object files, and then creates a static library using the `ar` command. The resulting library (`liball.a`) contains all the compiled functions from the source files.

## Resources

### Read or watch:

- [What Is A “C” Library? What Is It Good For?](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Creating A Static “C” Library Using “ar” and “ranlib”](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [Using A “C” Library In A Program](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html)
- [What is difference between Dynamic and Static library(Static and Dynamic linking) ](https://www.youtube.com/watch?v=eW5he5uFBNM) (stop at 4:44)

### man or help:

- `ar`
- `ranlib`
- `nm`

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
