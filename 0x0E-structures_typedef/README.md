# 0x0E. C - Structures, typedef - Low-level programming Project

Welcome to the ALX Low-Level Programming repository for the 'C - Structures, typedef' project. In this module, you will explore the powerful world of structures and typedef in C programming. Structures allow you to organize and group related data under a single user-defined type, fostering modularity and clarity in your code. The `typedef` keyword further enhances code readability by providing aliases for existing data types. This repository serves as your comprehensive resource, containing scripts and C programs essential for mastering the creation and manipulation of structures, as well as the effective use of `typedef`. Get ready to elevate your programming skills as you design and implement modular and well-organized C programs with structures and typedef.

## Learning Objectives

By completing this project, you will:

- **Structure Definition:** Understand the concept of structures in C and learn how to define and declare structures to group related data elements under a single name.
- **Structure Members:** Explore the use of structure members to represent different data types within a structure. Learn how to access and manipulate these members.
- **Initialization of Structures:** Learn how to initialize structures, either during declaration or separately, and understand the importance of proper initialization for reliable program behavior.
- **typedef Declaration:** Grasp the purpose and usage of `typedef` to create user-defined data types, providing a convenient way to simplify complex type declarations and improve code readability.
- **Nested Structures:** Explore the concept of nested structures, where a structure can contain members that are themselves structures. Understand how nested structures can be used to represent complex data relationships.

## Project Structure

This project aims to deepen your understanding and proficiency in using structures and typedef in the C programming language. Structures provide a way to group variables of different types under a single name, and typedef enhances code readability by allowing you to create custom data types. This project will guide you through various tasks to explore the versatility of structures and typedef in C.

0. **Poppy**
    - **[dog.h:](dog.h)** Define a new structure `named struct` dog with elements `name` (char *), `age` (float), and `owner` (char *).

1. **A dog is the only thing on earth that loves you more than you love yourself**
    - **[1-init_dog.c:](1-init_dog.c)** Write a function `init_dog` that initializes a variable of type `struct dog` with given parameters (`name`, `age`, `owner`).

2. **A dog will teach you unconditional love. If you can have that in your life, things won't be too bad**
    - **[2-print_dog.c:](2-print_dog.c)** Write a function `print_dog` that prints the details of a `struct dog`. If an element is `NULL`, print `(nil)` instead.

3. **Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read**
    - **[dog.h:](dog.h)** Define a new type `dog_t` as an alias for the type `struct dog`.

4. **A door is what a dog is perpetually on the wrong side of**
    - **[4-new_dog.c:](4-new_dog.c)** Write a function `new_dog` that creates a new dog with a copy of `name` and `owner`. Return `NULL` if it fails.

5. **How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg**
    - **[5-free_dog.c:](5-free_dog.c)** Write a function `free_dog` that frees the memory allocated for a `struct dog`.

## Resources

### Read or watch:

- [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231118%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231118T154342Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=ac69f6d39b7444fc21c5fa488be5ea0b6d364d29b598254fb298631bbf862ef8)
- [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: structures](https://github.com/alx-tools/Betty/wiki/Documentation:-Data-structures)
- [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231118%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231118T154419Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=c4e2e4cc575747195e488a9649a950d1b55f3d453c21f022043fd25299f81b07)
- [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
- **Programming in C** by Stephen Kochan - Chapter 8, Working with Structures p163-189
- [The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/) (Advanced - not mandatory)

For detailed instructions and examples, refer to the respective script files in this repository.

---

## Special Thanks for Project Guidance to 

- **Julien Barbier**

[YouTube](https://www.youtube.com/@0xJulien) | [Twitter](https://twitter.com/julienbarbier42) | [LinkedIn](https://www.linkedin.com/in/julienbarbier/)

## License

This project is licensed under the terms of the [MIT License](https://www.alxafrica.com/terms-conditions-portal/).

---

© 2023 [ALX](https://www.alxafrica.com/). All rights reserved.
