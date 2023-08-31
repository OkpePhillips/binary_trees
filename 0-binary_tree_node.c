#include "binary_trees.h"

/**
 * binary_tree_node - function to create a new node.
 * @parent: pointer to the parent of the node to create
 * @value: value to put in the node
 *
 * Return: Pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node != NULL)
	{
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->parent = parent;
		return (new_node);
	}
	return (NULL);
}
