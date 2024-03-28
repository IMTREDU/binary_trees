#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the number of leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count leaves for
 *
 * Return: Number of leaves in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree)
	{
		l += (!tree->left && !tree->right) ? 1 : 0;
		l += binary_tree_leaves(tree->left);
		l += binary_tree_leaves(tree->right);
	}

	return (l);
}
