#include "binary_trees.h"

/**
 * binary_tree_delete - Frees all the nodes in a binary tree.
 *
 * @tree: The root of the tree to free.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
