#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert a left node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node
 *
 *Return: pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_left;

	old_left = NULL;
	
	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		old_left = parent->left;
		parent->left = new_node;
		new_node->left = old_left;
		new_node->left->parent = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
