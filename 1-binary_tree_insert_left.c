#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a left node
 * @parent: parent node
 * @value: value of node
 * Return: returns the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		free(left_node);
		return (NULL);
	}

	left_node->n = value;
	left_node->left = NULL;
	left_node->right = NULL;
	left_node->parent = parent;

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		parent->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}
