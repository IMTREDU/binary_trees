#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree to count nodes for
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		n += (tree->left || tree->right) ? 1 : 0;
		n += binary_tree_nodes(tree->left);
		n += binary_tree_nodes(tree->right);
	}

	return (n);
}
