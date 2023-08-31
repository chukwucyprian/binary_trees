#include "binary_trees.h"
/**
 * tree_height - measures binary tree height
 * @tree: pointer to the root node
 * Return: binary tree height
 */
int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 (perfect) 0 (not perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	if (left_height == right_height)
		return (1);
	return (0);
}

