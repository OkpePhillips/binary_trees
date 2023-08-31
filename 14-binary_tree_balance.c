#include "binary_trees.h"

/**
 *binary_tree_balance - function to calculate binary balance
 *@tree: pointer to the root of the binary tree
 *
 *
 * Return: the balance factor of the tree, or 0 if null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_balance(tree->left);
	rh = binary_tree_balance(tree->right);

	if (tree->left)
		lh++;
	if (tree->right)
		rh++;
	return (lh - rh);
}


