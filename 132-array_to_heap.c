#include "binary_trees.h"

/**
 * array_to_heap - Converts an array of integers into a Max Binary Heap tree.
 * @array: Pointer to the first element of the array to convert.
 * @size: Number of elements in the array.
 *
 * Return: Pointer to the root node of the created Max Binary Heap tree,
 *        or NULL on failure.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int index;
	heap_t *root = NULL;

	for (index = 0; index < size; index++)
		heap_insert(&root, array[index]);

	return (root);
}
