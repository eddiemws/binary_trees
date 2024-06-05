#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of a node.
 *
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new_nod node.
 *
 * Return: A pointer to the created node, NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nod;

	if (parent == NULL)
		return (NULL);

	new_nod = binary_tree_node(parent, value);
	if (new_nod == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_nod->right = parent->right;
		parent->right->parent = new_nod;
	}
	parent->right = new_nod;

	return (new_nod);
}
