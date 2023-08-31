#include "binary_trees.h"

/**
 *binary_tree_nodes - funtion to return count of nodes
 *@tree: pointer to the root of the tree
 *
 * Return: Count ofthe nodes or 0 if null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (0);
}

