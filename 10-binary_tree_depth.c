#include "binary_trees.h"


/**
 * binary_tree_depth - prints depth of treee
 * @tree: pointer to tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0;

		l = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
		return (l);
	}
	return (0);
}
