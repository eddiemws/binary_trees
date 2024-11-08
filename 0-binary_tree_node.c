#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node.
 *
 * @parent: A pointer to the parent of the node.
 * @value: The value to be puted on the new_nod node.
 *
 * Return: If it fails - NULL else - a pointer to the new_nod node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nod;

	new_nod = malloc(sizeof(binary_tree_t));
	if (new_nod == NULL)
		return (NULL);

	new_nod->n = value;
	new_nod->parent = parent;
	
	new_nod->right = NULL;

	return (new_nod);
}
