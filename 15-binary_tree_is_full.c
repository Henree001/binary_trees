#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: The root of the tree
 * Return: 1 if it is a full binary tree, else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count_left, count_right;

	if (tree == NULL)
		return (0);
	count_left = binary_tree_is_full(tree->left);
	count_right = binary_tree_is_full(tree->right);
	if (count_left != count_right)
		return (0);
	//if ((tree->left && tree->right) || (!tree->left && !tree->right))
	return (1);
}
