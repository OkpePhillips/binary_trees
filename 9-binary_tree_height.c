#include "binary_trees.h"

/**
 *binary_tree_height - function to measure the height of a tree
 *@tree: pointer to the root of the tree to be measured
 *
 *Return: Height of the tree or 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);

	if (tree->left)
		lheight = lheight + 1;

	if (tree->right)
		rheight = rheight + 1;

	if (lheight >= rheight)
		return (lheight);
	else
		return (rheight);
}

