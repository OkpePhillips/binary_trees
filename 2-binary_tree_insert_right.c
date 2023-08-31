#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to insert a right node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node
 *
 *Return: pointer to the created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_right;

	old_right = NULL;
	
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		old_right = parent->right;
		parent->right = new_node;
		new_node->right = old_right;
		new_node->right->parent = new_node;
	}
	else
	{
		parent->right = new_node;
	}
	return (new_node);
}
