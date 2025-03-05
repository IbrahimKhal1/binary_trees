#include "binary_trees.h"

/**
 * array_to_avl - Creates an AVL tree from an array of integers.
 * @array: Array of integers to be used to build the tree.
 * @size: Number of elements in the array.
 *
 * Return: Root node of the created AVL tree, NULL if function fails.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
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
			if (avl_insert(&tree, array[index]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
