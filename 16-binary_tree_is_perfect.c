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

		return (l > r ? l : r);
	}
	return (0);
}

/**
 * binary_tree_size - prints size of a tree
 * @tree: pointer to tree
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: pointer to node
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size, height;

	if (tree == NULL)
	{
		return (0);
	}

	size = binary_tree_size(tree);
	height = binary_tree_height(tree) + 1;

	return (size == (1 << height) - 1);
}
