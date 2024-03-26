#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: node who has wants to find his uncle
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpa = NULL;

	if (!node || !(node->parent) ||
			!(node->parent->parent))
		return (NULL);
	grandpa = node->parent->parent;
	return (
			node->parent == grandpa->left ?
			grandpa->right :
			grandpa->left
	       );
}
