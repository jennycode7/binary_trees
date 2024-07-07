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
 * binary_tree_balance - prints balance factor of a tree
 * @tree: pointer to node
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		height_left = -1;
	}
	else
	{
		height_left = binary_tree_height(tree->left);
	}
	if (tree->right == NULL)
	{
		height_right = -1;
	}
	else
	{
		height_right = binary_tree_height(tree->right);
	}
	return (height_left - height_right);
}
