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
	if (parent == NULL)
		return (NULL);

