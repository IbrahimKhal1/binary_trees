#include "binary_trees.h"

avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last);

/**
 * sorted_array_to_avl - Constructs an AVL tree from a sorted array.
 * @array: Pointer to the initial element of the sorted array.
 * @size: The total number of elements in the array.
 *
 * Return: Pointer to the root node of the AVL tree, or NULL if failure occurs.
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return (NULL);
	return (aux_sort(NULL, array, 0, ((int)(size)) - 1));
}

/**
 * aux_sort - Recursively builds an AVL tree from a sorted array.
 * @parent: The parent node for the current subtree.
 * @array: Pointer to the sorted array of integers.
 * @begin: Start index of the current subarray.
 * @last: End index of the current subarray.
 *
 * Return: Pointer to the root node of the created subtree.
 */
avl_t *aux_sort(avl_t *parent, int *array, int begin, int last)
{
	avl_t *root;
	binary_tree_t *aux;
	int mid = 0;

	if (begin <= last)
	{
		mid = (begin + last) / 2;
		aux = binary_tree_node((binary_tree_t *)parent, array[mid]);
		if (aux == NULL)
			return (NULL);
		root = (avl_t *)aux;
		root->left = aux_sort(root, array, begin, mid - 1);
		root->right = aux_sort(root, array, mid + 1, last);
		return (root);
	}
	return (NULL);
}
