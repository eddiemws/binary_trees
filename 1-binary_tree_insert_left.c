#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 *
 * @parent: A pointer to the node to insert the left child in.
 * @value: The value to store the new_nod node.
 *
 * Return: A pointer to the created node, NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nod;

	if (parent == NULL)
		return (NULL);

	new_nod = binary_tree_node(parent, value);
	if (new_nod == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_nod->left = parent->left;
		parent->left->parent = new_nod;
	}
	parent->left = new_nod;

	return (new_nod);
}
