# 0x06. C - More pointers, arrays and strings - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - More pointers, arrays, and strings' project. In this project, you will dive deeper into the fascinating world of C programming, expanding your knowledge and mastery of pointers, arrays, and strings. This repository serves as your resource hub, containing the scripts and C programs necessary for you to explore advanced concepts, enhance your understanding of dynamic memory management, and sharpen your skills in working with complex data structures and string manipulation in C.

## Learning Objectives

By completing this project, you will:

- Develop an advanced understanding of pointers in C, including pointer arithmetic, pointers to functions, and complex data structures.
- Gain proficiency in dynamic memory allocation and deallocation, and understand the potential pitfalls and best practices.
- Master the concept of multidimensional arrays and learn how to work with arrays of arrays (e.g., matrices).
- Explore advanced string manipulation techniques, such as regular expressions, and learn how to work with wide character strings (wchar_t).
- Understand the concept of pointers to pointers (double pointers) and how they are used for handling more complex data structures.
- Learn advanced array operations and algorithms, including searching, sorting, and matrix operations.
- Develop skills for processing command-line arguments passed to C programs.
- Explore techniques for optimizing memory usage and reducing memory leaks in C programs.
- Enhance your error-handling and debugging skills when working with complex pointer, array, and string operations.

## Project Structure

The project consists of a series of scripts, each designed to explore various advanced aspects of C programming, with a primary focus on more pointers, arrays, and strings. This task set aims to further enhance your understanding of these essential concepts. Below is a brief summary of the tasks to be tackled:

0. **strcat**
    - **[0-strcat.c:](0-strcat.c)** Write a function that concatenates two strings. The function should append the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then add a terminating null byte. It should return a pointer to the resulting string `dest`.

1. **strncat**
    - **[1-strncat.c:](1-strncat.c)** Write a function that concatenates two strings. This function is similar to `strcat`, but it appends at most `n` bytes from `src` to `dest`. Additionally, `src` does not need to be null-terminated if it contains `n` or more bytes. Return a pointer to the resulting string `dest`.

2. **strncpy**
    - **[2-strncpy.c:](2-strncpy.c)** Write a function that copies a string. The function should work like `strncpy` from the standard library. It copies at most `n` characters from `src` into `dest`. If `src` is shorter than `n`, the remaining bytes in `dest` should be filled with null bytes.

3. **strcmp**
    - **[3-strcmp.c:](3-strcmp.c)** Write a function that copies a string. The function should work like `strncpy` from the standard library. It copies at most `n` characters from `src` into `dest`. If `src` is shorter than `n`, the remaining bytes in `dest` should be filled with null bytes.

4. **I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
    - **[4-rev_array.c:](4-rev_array.c)** Write a function that compares two strings. The function should work like `strcmp` from the standard library. It should return an integer less than, equal to, or greater than zero, depending on whether `s1` is less than, equal to, or greater than `s2`, respectively.

5. **Always look up**
    - **[5-string_toupper.c:](5-string_toupper.c)** Write a function that compares two strings. The function should work like strcmp from the standard library. It should return an integer less than, equal to, or greater than zero, depending on whether s1 is less than, equal to, or greater than s2, respectively.

6. **Expect the best. Prepare for the worst. Capitalize on what comes**
    - **[6-cap_string.c:](6-cap_string.c)** Write a function that capitalizes the first letter of each word in a string. Words are separated by spaces, tabs, newlines, commas, semicolons, periods, exclamation marks, question marks, double quotes, parentheses, and braces. The function should modify the input string in place and return a pointer to the modified string.

7. **Mozart composed his music not for the elite, but for everybody**
    - **[7-leet.c:](7-leet.c)** Write a function that encodes a string into "1337" speak. Replace specific letters with numbers as follows: 'a' or 'A' with '4', 'e' or 'E' with '3', 'o' or 'O' with '0', 't' or 'T' with '7', and 'l' or 'L' with '1'. The function should modify the input string in place and return a pointer to the modified string.

8. **rot13 (Advanced)**
    - **[100-rot13.c:](100-rot13.c)** Write a function that encodes a string using the ROT13 cipher. This cipher rotates the letters of the alphabet by 13 positions. The function should modify the input string in place and return a pointer to the modified string.

9. **Numbers have life; they're not just symbols on paper (Advanced)**
    - **[101-print_number.c:](101-print_number.c)** Write a function that prints an integer. The function should print the integer using only the `_putchar` function and should handle positive numbers or zero. It should not use long, arrays, pointers, or hard-coded values.

10. **A dream doesn't become reality through magic; it takes sweat, determination and hard work (Advanced)**
    - **[102-magic.c:](102-magic.c)** Add one line of code to a provided code snippet to print `a[2] = 98` followed by a newline. The code should be added at line 19 before the semicolon.

11. **It is the addition of strangeness to beauty that constitutes the romantic character in art (Advanced)**
    - **[103-infinite_add.c:](103-infinite_add.c)** Write a function that adds two positive numbers represented as strings. The function should store the result in a buffer `r` and return a pointer to the result. If the result cannot fit in the buffer, it should return 0.

12. **Noise is a buffer, more effective than cubicles or booth walls (Advanced)**
    - **[104-print_buffer.c:](104-print_buffer.c)** Write a function that prints the content of a buffer. The function should print 10 bytes per line, showing the position of the first byte in hexadecimal, the hexadecimal content of the buffer, and the corresponding ASCII characters. If the buffer is empty or size is 0, it should print a newline.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
