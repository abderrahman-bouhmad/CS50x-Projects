# 🧬 Inheritance

## Overview
A C program that simulates the **inheritance of blood type alleles** across multiple generations in a family. It demonstrates how traits are passed from parents to children using **recursion** and **dynamic memory** allocation.

## How It Works

- The program builds a family tree of a specified number of generations (default is 3).
- Each person:
  - Has **two parents** (recursively generated) 
  - Inherits **two alleles** (one from each parent)
- The first generation is assigned **random alleles** (A, B, or O)
- Subsequent generations inherit alleles from their parents
- The family tree is printed with names, generation levels, and blood types
  - Gets user input: name, month, and day  
  - Validates the input  
  - Adds the new birthday to the database  
  - Redirects to show the updated list

## Features

- Recursive creation of family members
- Random inheritance of alleles
- Memory management with malloc and free
- Visualized output showing parent-child relationships

## 📸 Example Output <img width="1078" alt="Screenshot" src="https://github.com/user-attachments/assets/dc8c0abe-e6f8-4644-9918-7dd137949857" />
