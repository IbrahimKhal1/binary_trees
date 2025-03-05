#include "binary_trees.h"

/**
 * binary_tree_insert_left - Creates a new node with the given value
 * and inserts it as the left child of the given parent node.
 * @parent: The node to insert the new node as the left child.
 * @value: The value to store in the new node.
 *
 * Return: The new node, or NULL if the operation fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
