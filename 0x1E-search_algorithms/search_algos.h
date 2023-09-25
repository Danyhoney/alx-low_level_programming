#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

/**
 * struct listint_s - Singly linked list node structure.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 *
 * Description:
 * This structure defines a node for a singly linked list. It contains an
 * integer value, an index indicating its position in the list, and a
 * pointer to the next node in the list.
 */
typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

/**
 * struct skiplist_s - Singly linked list node structure with an express lane.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 * @express: Pointer to the next node in the express lane.
 *
 * Description:
 * This structure defines a node for a singly linked list with an express lane.
 * It contains an integer value, an index indicating its position in the list,
 * a pointer to the next node in the regular lane, and a pointer to the next
 * node in the express lane.
 */
typedef struct skiplist_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct skiplist_s *next;    /* Pointer to the next node. */
    struct skiplist_s *express; /* Pointer to the next node in the express lane. */
} skiplist_t;

/* Function prototypes for various search algorithms */

/**
 * linear_search - Search for a value in an array using linear search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The first index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs a linear search for 'value' in the given 'array' of
 * 'size' elements.
 */
int linear_search(int *array, size_t size, int value);

/**
 * print_array - Print the elements of an array within a range.
 *
 * @array: Pointer to the first element of the array.
 * @l: Left index of the range to print.
 * @r: Right index of the range to print.
 *
 * Description:
 * This function prints the elements of 'array' within the specified range
 * [l, r] (inclusive) to the standard output.
 */
void print_array(int *array, size_t l, size_t r);

/**
 * binary_search_index - Perform binary search on a subarray for a value.
 *
 * @array: Pointer to the first element of the array.
 * @l: Left index of the subarray.
 * @r: Right index of the subarray.
 * @value: Value to search for.
 *
 * Return:
 * - The index where 'value' is located in the subarray [l, r].
 * - (-1) if 'value' is not present in the subarray.
 *
 * Description:
 * This function performs binary search for 'value' in the subarray of 'array'
 * from index 'l' to index 'r'.
 */
int binary_search_index(int *array, size_t l, size_t r, int value);

/**
 * binary_search - Search for a value in a sorted array using binary search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs binary search for 'value' in the given sorted 'array'
 * of 'size' elements.
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - Search for a value in an array using jump search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs jump search for 'value' in the given 'array' of
 * 'size' elements.
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - Search for a value in a sorted array using interpolation search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs interpolation search for 'value' in the given sorted
 * 'array' of 'size' elements.
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - Search for a value in a sorted array using exponential search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The index where 'value' is located in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs exponential search for 'value' in the given sorted
 * 'array' of 'size' elements.
 */
int exponential_search(int *array, size_t size, int value);

/**
 * advanced_binary - Search for the first occurrence of a value in a sorted array using advanced binary search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return:
 * - The index of the first occurrence of 'value' in 'array'.
 * - (-1) if 'value' is not present in 'array'.
 *
 * Description:
 * This function performs an advanced binary search for the first occurrence
 * of 'value' in the given sorted 'array' of 'size' elements.
 */
int advanced_binary(int *array, size_t size, int value);

/* Function prototypes for list-related functions */

/**
 * jump_list - Search for a value in a singly linked list using jump search.
 *
 * @list: Pointer to the head of the singly linked list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return:
 * - A pointer to the first node where 'value' is located in the list.
 * - NULL if 'value' is not present in the list.
 *
 * Description:
 * This function performs jump search for 'value' in the given singly linked
 * list of 'size' nodes.
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * linear_skip - Search for a value in a singly linked list with an express lane using linear skip search.
 *
 * @list: Pointer to the head of the singly linked list with an express lane.
 * @value: Value to search for.
 *
 * Return:
 * - A pointer to the node where 'value' is located in the list.
 * - NULL if 'value' is not present in the list.
 *
 * Description:
 * This function performs linear skip search for 'value' in the given singly
 * linked list with an express lane.
 */

skiplist_t *linear_skip(skiplist_t *list, int value);

/* Helper functions for working with lists */

/**
 * create_list - Create a singly linked list from an array of integers.
 *
 * @array: Pointer to the first element of the integer array.
 * @size: Number of elements in the array.
 *
 * Return:
 * - A pointer to the head of the created singly linked list.
 * - NULL if memory allocation fails.
 *
 * Description:
 * This function takes an integer array and its size and creates a singly linked
 * list where each element of the array becomes a node in the list.
 */
listint_t *create_list(int *array, size_t size);

/**
 * print_list - Print the elements of a singly linked list.
 *
 * @list: Pointer to the head of the singly linked list.
 *
 * Description:
 * This function prints the elements of the singly linked list to the standard
 * output.
 */
void print_list(const listint_t *list);

/**
 * free_list - Free the memory allocated for a singly linked list.
 *
 * @list: Pointer to the head of the singly linked list.
 *
 * Description:
 * This function frees the memory allocated for a singly linked list.
 */
void free_list(listint_t *list);

/**
 * create_skiplist - Create a singly linked list with an express lane from an array of integers.
 *
 * @array: Pointer to the first element of the integer array.
 * @size: Number of elements in the array.
 *
 * Return:
 * - A pointer to the head of the created singly linked list with an express lane.
 * - NULL if memory allocation fails.
 *
 * Description:
 * This function takes an integer array and its size and creates a singly linked
 * list with an express lane where each element of the array becomes a node in
 * the list.
 */
skiplist_t *create_skiplist(int *array, size_t size);

/**
 * print_skiplist - Print the elements of a singly linked list with an express lane.
 *
 * @list: Pointer to the head of the singly linked list with an express lane.
 *
 * Description:
 * This function prints the elements of the singly linked list with an express
 * lane to the standard output.
 */
void print_skiplist(const skiplist_t *list);

/**
 * free_skiplist - Free the memory allocated for a singly linked list with an express lane.
 *
 * @list: Pointer to the head of the singly linked list with an express lane.
 *
 * Description:
 * This function frees the memory allocated for a singly linked list with an
 * express lane.
 */
void free_skiplist(skiplist_t *list);

#endif /* _SEARCH_ALGOS_H_ */
