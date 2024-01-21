# pystr - Python-Style String Class Implementation in C

## Overview

Welcome to the `pystr` repository! This C program provides a practical implementation of a dynamic string structure in C, inspired by Python strings. It's an excellent resource for junior developers looking to enhance their understanding of memory management, pointers, and object-oriented programming principles.

## Table of Contents

- [Why Use This Script](#why-use-this-script)
- [Prerequisites](#prerequisites)
- [Languages and Utilities Used](#languages-and-utilities-used)
- [Environments Used](#environments-used)
- [Memory Management and Pointers](#memory-management-and-pointers)
- [String Operations](#string-operations)
- [Object-Oriented Programming (OOP) Approach](#object-oriented-programming-oop-approach)
- [Usage](#usage)

## Why Use This Script

Implementing a dynamic string structure in C, this project goes beyond traditional string handling and demonstrates object-oriented programming concepts. It provides practical insights into memory management, pointers, and efficient string manipulation in C.

## Prerequisites

Before using this C program, ensure that you have the following:

- A C compiler installed on your system.
- Basic understanding of C programming, including memory management concepts.
- Review: [Doubly Linked List Concepts](https://github.com/infinity-set/doubly_linked_list)

## Languages and Utilities Used

- **C**
- **Visual Studio Code**

[<img  alt="C Logo Icon" width="45px" src="https://upload.wikimedia.org/wikipedia/commons/1/18/C_Programming_Language.svg" />][C]
[<img alt="Visual Code Icon" width="45px" src="https://upload.wikimedia.org/wikipedia/commons/9/9a/Visual_Studio_Code_1.35_icon.svg" />][vscode]

[C]: https://learn.microsoft.com/en-us/cpp/c-language/
[vscode]: https://code.visualstudio.com/

## Environments Used

- **Windows**

[<img align="left" alt="Microsoft Icon" width="35px" src="https://upload.wikimedia.org/wikipedia/commons/3/34/Windows_logo_-_2012_derivative.svg" />][windows]

[windows]: https://www.microsoft.com/

<br /><br />

## Memory Management and Pointers

This repository emphasizes memory management and pointers, crucial concepts for any C developer. Throughout the code, you'll encounter dynamic memory allocation, pointer manipulation, and proper deallocation techniques. Understanding these aspects is essential for building robust and efficient C programs.

## String Operations

## String Operations

- **Create a New String:** `pystr_new()`
  - Python syntax: `string = str()`

- **Delete a String:** `pystr_del()`
  - Python syntax: Note: Python handles memory management automatically, so no explicit deletion is required.

- **Get String Length:** `pystr_len()`
  - Python syntax: `string = len(string)`

- **Get String Data:** `pystr_str()`

- **Append a Character:** `pystr_append()`
  - Python syntax: `string += new_character`

- **Append a String:** `pystr_appends()`
  - Python syntax: `string += another_string`

- **Assign a New String:** `pystr_assign()`
  - Python syntax: `string = new_assigned_string`


## Object-Oriented Programming (OOP) Approach

### Encapsulation

The `pystr` structure encapsulates data related to the string, and functions operate on this structure. This encapsulation ensures that the internal details are hidden from the outside world, promoting a modular and organized design.

### Abstraction

Functions such as `pystr_new`, `pystr_del`, `pystr_append`, and others provide a level of abstraction, allowing users to interact with strings without needing to know the internal implementation details. This abstraction simplifies the usage of the dynamic string, enhancing code readability.

### Initialization and Cleanup

The `pystr_new` and `pystr_del` functions can be considered constructor and destructor equivalents. They handle the creation and destruction of a string object, providing a structured and intuitive way to manage string instances.

### Method-Like Functions

Functions like `pystr_len`, `pystr_str`, `pystr_append`, and others serve as methods that operate on a given instance of the `pystr` structure. This approach mirrors the concept of methods in OOP, allowing for a consistent and logical interaction with string objects.

### Memory Management

The allocation and deallocation of memory for the string data are managed within the `pystr` functions. This demonstrates a level of responsibility similar to OOP object instantiation and destruction, contributing to efficient memory handling.

## Usage

The main function in the provided C code demonstrates the usage of `pystr`.

 <div align="center">
<br/>
<img src="https://github.com/infinity-set/pystr/assets/142350896/cacb5493-8531-40ed-91c4-5c308a2bcd04" height="100%" width="100%" alt="Main function code displayed in C"/>
<br />   
 </div>

 <div align="center">
<br/>
<img src="https://github.com/infinity-set/pystr/assets/142350896/490d8c2b-570d-4e2a-ab71-fd2a8cff6196" height="100%" width="100%" alt="Output of the execution displayed."/>
<br />   
 </div>

<br />   
Feel free to explore and modify the code based on your requirements!

#

⬅️ **[Home](https://github.com/infinity-set)**
