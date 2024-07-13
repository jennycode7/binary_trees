#include "binary_trees.h"

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

/**
 * bst_insert_recursion - recursively traverses a Binary Search Tree to insert
 * a new value
 *
 * @tree: binary tree node
 * @value: integer to insert in new node
 * Return: pointer to new node, or NULL on failure or value found already
 * found in tree
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *new = NULL;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->left = new;
			return (new);
		}

		return (bst_insert_recursion(tree->left, value));
	}

	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->right = new;
			return (new);
		}

		return (bst_insert_recursion(tree->right, value));
	}

	/* (tree->n == value) */
	return (NULL);
}


/**
 * bst_insert - inserts a value in a Binary Search Tree
 *
 * @tree: binary tree node passed by reference
 * @value: integer to insert in new node
 * Return: pointer to new node, or NULL on failure or value found already
 * found in tree
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new = NULL;

	if (!tree || !(*tree))
	{
		new = binary_tree_node(NULL, value);
		*tree = new;
		return (new);
	}

	return (bst_insert_recursion(*tree, value));
}
