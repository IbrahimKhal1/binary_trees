#include "binary_trees.h"

/**
 * array_to_bst - Converts an array into a Binary Search Tree.
 * @array: Pointer to the initial element of the array to convert.
 * @size: Number of elements within the array.
 *
 * Return: Pointer to the root node of the newly created BST, or NULL.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t index, jndex;

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
	{
		for (jndex = 0; jndex < index; jndex++)
		{
			if (array[jndex] == array[index])
				break;
		}
		if (jndex == index)
		{
			if (bst_insert(&tree, array[index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
