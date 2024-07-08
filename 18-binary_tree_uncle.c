#include "binary_trees.h"

/**
 * binary_tree_uncle - prints the uncle of a node
 * @node: pointer to node
 * Return: binary_tree_t
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL ||
			node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
