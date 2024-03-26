#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling to node
 *
 * @node: node being evaluated
 * Return: pointer to sibling to node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (
			node == node->parent->left ?
			node->parent->right :
			node->parent->left
	       );
}
