#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses tree in postorder
 *
 * @tree: pointer to the root node
 * @func: pointer to function to print stored value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
