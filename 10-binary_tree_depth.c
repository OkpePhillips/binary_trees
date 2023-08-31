#include "binary_trees.h"

/**
 *binary_tree_depth - function to measure the depth of a tree
 *@tree: pointer to the root of the tree to be measured
 *
 *Return: Height of the tree or 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	depth = 0;
	while (tree != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth - 1);
}
