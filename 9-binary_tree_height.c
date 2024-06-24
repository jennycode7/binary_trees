#include "binary_trees.h"


/**
 * binary_tree_height - prints the height of a tree
 * @tree: pointer to node
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		return (l > r ? l : r)
	}
}
