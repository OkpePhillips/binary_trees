#include "binary_trees.h"

/**
 *binary_tree_preorder - function for preorder traversal
 *@tree: pointer to the root of the node to traverse
 *@func: Pointer to a function to call for each node
 *Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
