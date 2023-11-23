# 0x14. C - Bit manipulation - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Bit Manipulation' project. In this module, you will immerse yourself in the fascinating realm of bit manipulation in C programming. Bit manipulation provides a powerful set of operations for working with individual bits, allowing for efficient and compact code in scenarios such as data compression, cryptography, and system-level programming. This repository serves as your comprehensive resource, containing scripts and C programs essential for mastering the intricacies of bit manipulation. Get ready to explore the binary world, sharpen your bitwise operation skills, and unlock new dimensions for creating efficient and optimized C programs.

## Learning Objectives

By completing this project, you will:

- **Understanding Bitwise Operations:** Develop a clear understanding of bitwise operations, including AND (`&`), OR (`|`), XOR (`^`), left shift (`<<`), and right shift (`>>`). Understand how these operations manipulate individual bits.
- **Bitwise Manipulation Techniques:** Learn various techniques for common bit manipulation tasks, such as setting, clearing, and toggling specific bits, checking if a particular bit is set or unset, and counting the number of set bits (population count).
- **Bitwise Operators in C:** Understand how to use bitwise operators in C programming and their applications in scenarios like optimizing code, implementing algorithms, and working with low-level data representation.
- **Bitmasking:** Explore the concept of bitmasking, where specific bits are used to represent and manipulate sets of flags or options. Learn how to use masks to extract, modify, or test specific bits within a value.
- **Bitwise Tricks and Optimization:** Learn advanced bitwise tricks and optimization techniques, such as swapping values without using a temporary variable, finding the absolute value of a number, and checking if a number is a power of two.

## Project Structure

This project focuses on mastering bit manipulation techniques in the C programming language. Bit manipulation is a powerful tool for performing operations at the binary level, which is crucial in various scenarios, including embedded systems, cryptography, and performance optimization. This project will guide you through tasks to understand and apply bit manipulation effectively.

0. **0**
    - **[0-binary_to_uint.c:](0-binary_to_uint.c)**  This task involves writing a function that converts a binary number, represented as a string of `0` and `1` characters, to an unsigned integer. The function returns the converted number or `0` if there's an invalid character or if the input string is `NULL`.

1. **1**
    - **[1-print_binary.c:](1-print_binary.c)** The goal is to implement a function that prints the binary representation of a given unsigned long integer. The function should output the binary representation without using arrays, malloc, or the `%` and `/` operators.

2. **10**
    - **[2-get_bit.c:](2-get_bit.c)** In this task, a function is implemented to get the value of a bit at a specified index in an unsigned long integer. The function returns the value of the bit at the given index or `-1` in case of an error.

3. **11**
    - **[3-set_bit.c:](3-set_bit.c)** The task requires writing a function that sets the value of a bit at a specified index to `1` in an unsigned long integer. The function returns `1` if it succeeds and `-1` if an error occurs.

4. **100**
    - **[4-clear_bit.c:](4-clear_bit.c)** This task involves writing a function that sets the value of a bit at a specified index to `0` in an unsigned long integer. The function returns `1` if it succeeds and `-1` if an error occurs.

5. **101**
    - **[5-flip_bits.c:](5-flip_bits.c)** A function is implemented to calculate the number of bits needed to be flipped in order to transform one unsigned long integer into another. The function returns the count of flipped bits.

6. **Endianness (Advanced)**
    - **[100-get_endianness.c:](100-get_endianness.c)** The task is to create a function that checks the endianness of the system. It returns `0` if the system is big-endian and `1` if it's little-endian.

7. **Crackme3 (Advanced)**
    - **[101-password:](101-password)** In this advanced task, the challenge is to find the password for a given program. Once the correct password is found, it should be saved in the file named `101-password`. The file should contain only the exact password, without any new lines or extra spaces.

## Resources

### Read or watch:

- [Google](https://www.google.com/search?q=bit+manipulation+C&sca_esv=584912597&sxsrf=AM9HkKkLcBBmRqGXN2ZvZHfauhYuCmY6Rw%3A1700772047957&source=hp&ei=z7hfZZvnN9_kxc8P2KecsAM&iflsig=AO6bgOgAAAAAZV_G38KW0QgyhX8X_Lr94rmmGpY49u0o&ved=0ahUKEwjbiorO_dqCAxVfcvEDHdgTBzYQ4dUDCAo&uact=5&oq=bit+manipulation+C&gs_lp=Egdnd3Mtd2l6IhJiaXQgbWFuaXB1bGF0aW9uIENIAFAAWABwAHgAkAEAmAEAoAEAqgEAuAEDyAEA&sclient=gws-wiz)
- [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
