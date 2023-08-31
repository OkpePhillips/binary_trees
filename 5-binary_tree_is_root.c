#include "binary_trees.h"

/**
 *binary_tree_is_root - function to check is a node is root
 *@node: pointer to the node to be checked
 *
 *Return: 1 is node is root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
