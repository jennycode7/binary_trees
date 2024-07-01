#include "binary_trees.h"


/**
 * binary_tree_nodes - counts nodes with child
 * @tree: pointer to node
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + binary_tree_nodes(tree->left)
				+ binary_tree_nodes(tree->right));
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
