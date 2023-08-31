#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr = node->parent;

	if (!node || !ptr)
		return (NULL);
	if (ptr->left == node)
		return (ptr->right == NULL ? NULL : ptr->right);
	return (ptr->left == NULL ? NULL : ptr->left);
}

