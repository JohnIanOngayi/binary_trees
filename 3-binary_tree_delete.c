#include "binary_trees.h"


/**
 * _free - safe free
 * @ptr: pointer to memblk being freed
 */
void _free(void *ptr)
{
	if (ptr)
	{
		free(ptr);
		ptr = NULL;
	}
}


/**
 * binary_tree_delete - deletes an entire binary binary_tree
 *
 * @tree: pointer to root node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	_free(tree);
}
