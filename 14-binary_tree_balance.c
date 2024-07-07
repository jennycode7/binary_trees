#include "binary_trees.h"


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
