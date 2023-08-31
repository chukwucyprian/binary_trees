#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *ptr;

	if (!node || !node->parent)
		return (NULL);
	ptr = node->parent;
	if (ptr->left == node)
		return (ptr->right);
	return (ptr->left);
}

