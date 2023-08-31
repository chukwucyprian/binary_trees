#include "binary_trees.h"
/**
 * max - computes maximum of two integer numbers
 * @a: first integer number
 * @b: second integer number
 * Return: maximum of two integer numbers
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_height - measures height of a binary tree
 * @tree: binary tree pointer to root node
 * Return: Height of binary tree
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (1 + max(left_height, right_height));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node of the tree
 * Return: binary tree balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height - right_height);
}

