#include "binary_trees.h"

/**
 *binary_tree_postorder - function for postorder traversal
 *@tree: pointer to the root of the node to traverse
 *@func: Pointer to a function to call for each node
 *Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
