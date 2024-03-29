#include "binary_trees.h"

/**
 *binary_tree_is_leaf - function to check is a node is leaf
 * @node: pointer to node to be checked
 *
 * Return: 1 if node is a leaf, 0 if node is null or not a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
