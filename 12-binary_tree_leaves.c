#include "binary_trees.h"

/**
 * binary_tree_leaves - prints number of leaves
 * @tree: pointer to node
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right))
	}

	return (0);
}
