#include "binary_trees.h"


/**
 * binary_tree_node - a binary tree
 * @parent: A pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node = malloc(sizeof(binary_tree_t));

	if (child_node == NULL)
	{
		return (NULL);
	}
	child_node->n = value;
	child_node->left = NULL;
	child_node->right = NULL;
	child_node->parent = parent;

	return (child_node);
}
