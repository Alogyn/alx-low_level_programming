# 0x0A. C - argc, argv - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - argc, argv' project. In this project, you will dive into the heart of command-line argument handling in C programming. Understanding `argc` and `argv` is essential for building versatile and interactive C programs, allowing users to provide input and arguments directly from the command line. This repository serves as your dedicated resource center, containing scripts and C programs crucial for mastering the art of parsing command-line arguments, enabling you to create flexible, user-friendly, and interactive applications. Get ready to enhance your C programming skills and create programs that respond dynamically to user input through the power of `argc` and `argv`.

## Learning Objectives

By completing this project, you will:

- Understand the concept of command-line arguments, the `argc` (argument count) and `argv` (argument vector) parameters, and how they are used to pass information to C programs.
- Master the techniques for parsing and processing command-line arguments, including options, flags, and values, to make your programs more flexible and user-friendly.
- Develop proficiency in error handling and validation when working with command-line arguments to ensure that your program gracefully handles invalid inputs or missing arguments.
- Learn how to create informative usage messages and help texts that guide users on how to use your C programs with the correct command-line arguments.
- Explore various real-world application scenarios where command-line arguments are essential, including building utilities and applications that interact with users from the command line.

## Project Structure

This project focuses on exploring the advanced applications of command line arguments (`argc` and `argv`) in C programming. Command line arguments are vital for user interaction, enabling programs to receive inputs without modifying the source code. This project dives into intricate aspects of argument parsing, handling various argument types, and implementing interactive user input methods. By the end of this project, you'll have a deep understanding of how to create robust and user-friendly C programs that efficiently utilize command line inputs.

0. **It ain't what they call you, it's what you answer to**
    - **[0-whatsmyname.c:](0-whatsmyname.c)** Prints its name, followed by a new line. It demonstrates how the program can print its own name without needing to recompile when renamed. `The argv[0]` parameter in `main` holds the program name, which is printed to the console.

1. **Silence is argument carried out by other means**
    - **[1-args.c:](1-args.c)** Prints the number of arguments passed into it. It demonstrates how to access the `argc` parameter in the `main` function, which holds the number of arguments. The program simply prints the value of `argc` to the console.

2. **The best argument against democracy is a five-minute conversation with the average voter**
    - **[2-args.c:](2-args.c)** Prints all the arguments it receives, with one argument per line. It demonstrates how to access the `argv` parameter in the `main` function, which is an array of strings holding all the arguments passed to the program. The program iterates through the `argv` array and prints each argument.

3. **Neither irony nor sarcasm is argument**
    - **[3-mul.c:](3-mul.c)** Multiplies two numbers and prints the result. It checks if it has received exactly two arguments representing integers, multiplies them, and prints the result. If not, it prints "Error" and returns 1.

4. **To infinity and beyond**
    - **[4-add.c:](4-add.c)** Adds positive numbers and prints the result. It checks if it has received positive integer arguments, adds them, and prints the result. If any argument is not a positive integer, it prints "Error" and returns 1. If no arguments are provided, it prints 0.

5. **Minimal Number of Coins for Change (Advanced)**
    - **[100-change.c:](100-change.c)** Calculates the minimum number of coins required to make change for a given amount of money (in cents). It takes one argument (the amount in cents) and uses a greedy algorithm to determine the minimum number of coins needed to make change. The allowed coin values are 25, 10, 5, 2, and 1 cent.

## Resources

### Read or watch:

- [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [how to compile with unused variables](https://stackoverflow.com/questions/3417837/best-way-to-suppress-c-warning-unused-variable-x)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
