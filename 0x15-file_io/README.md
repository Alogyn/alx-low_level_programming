# 0x15. C - File I/O - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - File I/O' project. In this module, you will dive into the essential aspects of File Input/Output (I/O) in C programming. File I/O is fundamental for handling data persistence, allowing your programs to read from and write to files. This repository serves as your comprehensive guide, containing scripts and C programs essential for mastering the intricacies of file operations. Get ready to explore the world of streams, file descriptors, and file manipulation functions, enhancing your ability to create C programs that interact with external data files, providing a solid foundation for real-world applications.

## Learning Objectives

By completing this project, you will:

- **File Opening and Closing:** Understand how to open and close files in C using functions like fopen and fclose. Grasp the importance of proper file handling to prevent resource leaks.
- **Reading and Writing Text Files:** Learn how to read and write text files using functions like fread, fwrite, fgets, and fputs. Understand how to manipulate strings and characters when dealing with file I/O.
- **Binary File Operations:** Explore reading from and writing to binary files using functions like fread and fwrite. Understand the differences between text and binary file formats and when to use each.
- **Random Access:** Learn about random access file operations using functions like fseek and ftell. Understand how to navigate within a file and modify specific portions without reading the entire file.
- **Error Handling:** Develop proficiency in error handling when working with files. Learn to check for file opening errors, reading or writing failures, and other potential issues to ensure robust and reliable file operations.

## Project Structure

This project is designed to enhance your skills in file input and output (I/O) in the C programming language. File I/O is a crucial aspect of programming, allowing interaction with external files for reading and writing data. This project will guide you through various tasks to understand and apply file I/O operations efficiently.

0. **Tread lightly, she is near**
    - **[0-read_textfile.c:](0-read_textfile.c)** This task involves writing a function that reads a text file and prints its contents to the standard output. The function takes the filename and the number of letters to read and print as arguments. It returns the actual number of letters it could read and print. If the file cannot be opened or read, the function returns `0`. If the filename is `NULL`, it also returns `0`.

1. **Under the snow**
    - **[1-create_file.c:](1-create_file.c)** The goal is to create a function that creates a file. The function takes the filename and a text content string as arguments. It returns `1` on success and `-1` on failure. The file must have the permissions `rw-------`, and if the file already exists, it should be truncated. If the filename is `NULL`, the function returns `-1`, and if the text_content is `NULL`, it creates an empty file.

2. **Speak gently, she can hear**
    - **[2-append_text_to_file.c:](2-append_text_to_file.c)** This task requires writing a function that appends text at the end of a file. The function takes the filename and text content as arguments and returns `1` on success and `-1` on failure. If the file does not exist, it should not be created. If the filename is `NULL`, the function returns `-1`. If the `text_content` is `NULL`, nothing should be added to the file.

3. **cp**
    - **[3-cp.c:](3-cp.c)** The goal is to create a program that copies the content of one file to another. The program should be used with the syntax `cp file_from file_to`. It handles different error cases, such as incorrect arguments, inability to read or write files, and issues with closing file descriptors. The created file should have permissions `rw-rw-r--`, and if the `file_to` already exists, it should be truncated. The program reads `1,024` bytes at a time using a buffer.

4. **elf (Advanced)**
    - **[100-elf_header.c:](100-elf_header.c)** This is an advanced task where a program is created to display information contained in the ELF header at the start of an ELF file. The usage is `elf_header elf_filename`. The displayed information includes the magic, class, data, version, OS/ABI, ABI version, type, and entry point address. If the file is not an ELF file or encounters an error, it exits with status code `98` and displays a comprehensive error message to stderr.

## Resources

### Read or watch:

- [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- [C Programming in Linux Tutorial #024 - open() read() write() Functions](https://www.youtube.com/watch?v=e-srF6c3TJ8)

### man or help

- `open`
- `close`
- `read`
- `write`
- `dprintf`

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
