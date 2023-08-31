#include "binary_trees.h"

/**
 *binary_tree_is_full - function to check if a binary tree is full
 *@tree: pointer to the root of the binary tree
 *
 *Return: 1 if full, 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
		return ((binary_tree_is_full(tree->left)
				&& binary_tree_is_full(tree->right)));
	return (0);
}
