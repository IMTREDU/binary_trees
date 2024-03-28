#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to calculate balance factor
 *
 * Return: If tree is NULL, return 0; otherwise, return balance factor
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a tree
 * @tree: Pointer to the root node of the tree to measure height
 *
 * Return: If tree is NULL, return 0; otherwise, return height
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);
}
