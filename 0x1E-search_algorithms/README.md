# 0x1E. C - Search Algorithms

+ https://github.com/Danyhoney/alx-low_level_programming/

![download](https://github.com/Danyhoney/alx-low_level_programming/assets/122806822/c7c07add-7db9-4ddd-a2b4-e746334a6e05)
![search_algos](https://github.com/Danyhoney/alx-low_level_programming/assets/122806822/b3584a04-1997-4eb5-9ee1-9e2782a64c9a)
![search_algos_1](https://github.com/Danyhoney/alx-low_level_programming/assets/122806822/cc486c51-b0e7-4049-aa94-c81bce47a314)


* This repository contains implementations of various search algorithms in the C programming language. These algorithms are essential tools in computer science and are used to efficiently find specific elements in datasets. The project covers both basic and advanced search algorithms.

# Table of Contents
* Search Algorithms
+ Table of Contents
+  Getting Started
+ Prerequisites
+ Installation
+ Project Structure
+ Usage
+ Linear Search
+ Binary Search
+ Jump Search
+ Interpolation Search
+ Exponential Search
+ Advanced Binary Search
+ Jump Search in a Singly Linked List
+ Linear Search in a Skip List
+ Contributing
+ License
+ Acknowledgments

# Getting Started
* Follow the instructions below to get a copy of the project up and running on your local machine.

# Prerequisites
* Before you begin, ensure you have met the following requirements:

# GCC: You need the GNU Compiler Collection to compile the C source files.
# Linux: This project is designed for a Linux environment.

# Installation
* To clone this project, run the following command:

+ git clone https://github.com/yourusername/search-algorithms.git

# Once you have cloned the repository, navigate to the project directory:

+ cd search-algorithms

# Now, you can compile the C files using GCC:
+ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o search_algorithms

# Project Structure
* The project is organized as follows:

+ 0-linear.c: Linear search implementation.
+ 1-binary.c: Binary search implementation.
+ 2-O: Time complexity analysis for linear search.
+ 3-O: Space complexity analysis for iterative linear search.
+ 4-O: Time complexity analysis for binary search.
+ 5-O: Space complexity analysis for binary search.
+ 6-O: Space complexity analysis for the allocate_map function.
+ 100-jump.c: Jump search implementation.
+ 101-O: Average-case time complexity analysis for jump search.
+ 102-interpolation.c: Interpolation search implementation.
+ 103-exponential.c: Exponential search implementation.
+ 104-advanced_binary.c: Advanced binary search implementation.
+ 105-jump_list.c: Jump search in a singly linked list implementation.
+ 106-linear_skip.c: Linear search in a skip list implementation.
+ listint/: Additional files for singly linked list management.

# Usage
* This section explains how to use the different search algorithms implemented in this project.

# Linear Search
* The linear_search function searches for a value in an array using the Linear search algorithm. It returns the index of the first occurrence of the value.

int linear_search(int *array, size_t size, int value);

# Example usage:

int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 3;

int index = linear_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Binary Search
* The binary_search function searches for a value in a sorted array using the Binary search algorithm. It returns the index of the value if found, or -1 if not found.

int binary_search(int *array, size_t size, int value);

# Example usage:

int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 5;

int index = binary_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Jump Search
* The jump_search function searches for a value in a sorted array using the Jump search algorithm. It returns the index of the first occurrence of the value.

int jump_search(int *array, size_t size, int value);

# Example usage:

int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 3;

int index = jump_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Interpolation Search
* The interpolation_search function searches for a value in a sorted array using the Interpolation search algorithm. It returns the index of the value if found, or -1 if not found.

int interpolation_search(int *array, size_t size, int value);

# Example usage:

int array[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 12;

int index = interpolation_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Exponential Search
* The exponential_search function searches for a value in a sorted array using the Exponential search algorithm. It returns the index of the first occurrence of the value.

int exponential_search(int *array, size_t size, int value);

# Example usage:

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 6;

int index = exponential_search(array, size, target);
printf("Found %d at index: %d\n", target, index);

# Advanced Binary Search
* The advanced_binary function searches for a value in a sorted array using a variant of the Binary search algorithm. It returns the index of the first occurrence of the value.


int advanced_binary(int *array, size_t size, int value);

# Example usage:

int array[] = {1, 2, 4, 4, 4, 4, 4, 5, 6, 7};
size_t size = sizeof(array) / sizeof(array[0]);
int target = 4;

int index = advanced_binary(array, size, target);
printf("Found %d at index: %d\n", target, index);


# Jump Search in a Singly Linked List
* The jump_list function searches for a value in a sorted singly linked list using the Jump search algorithm. It returns a pointer to the node containing the value, or NULL if not found.

listint_t *jump_list(listint_t *list, size_t size, int value);

# Example usage:

listint_t *list = NULL;
listint_t *result = NULL;

add_node(&list, 0);
add_node(&list, 1);
add_node(&list, 2);
add_node(&list, 3);
add_node(&list, 4);
add_node(&list, 5);

int target = 3;
result = jump_list(list, 6, target);

if (result)
    printf("Found %d in the list.\n", target);
else
    printf("%d not found in the list.\n", target);
Linear Search in a Skip List
The linear_skip function searches for a value in a sorted skip list using the Linear search algorithm. It returns a pointer to the node containing the value, or NULL if not found.

skiplist_t *linear_skip(skiplist_t *list, int value);

# Example usage:

skiplist_t *list = NULL;
skiplist_t *result = NULL;

add_node(&list, 0);
add_node(&list, 1);
add_node(&list, 2);
add_node(&list, 3);
add_node(&list, 4);
add_node(&list, 5);

int target = 3;
result = linear_skip(list, target);

if (result)
    printf("Found %d in the list.\n", target);
else
    printf("%d not found in the list.\n", target);

# Contributing
* Contributions to this project are welcome. To contribute, follow these steps:

# Fork the repository.
* Create a new branch with a descriptive name for your feature or bug fix.
* Make your changes and test them thoroughly.
* Commit your changes with clear and concise commit messages.
* Push your changes to your fork.
* Create a pull request to the main branch of this repository, explaining your changes.

# License
* This project is licensed under the MIT License - see the LICENSE file for details.

# Acknowledgments
* This project is part of the curriculum at [Your University Name], [Department Name].
Special thanks to [Instructor Name] for guidance and support.

