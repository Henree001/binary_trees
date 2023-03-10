#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - checks the balance factor of a binary tree
 * @tree: the root of the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b_factor_right, b_factor_left;

	if (tree == NULL)
		return (0);
	if (tree->left)
		b_factor_left = binary_tree_height(tree->left);
	else
		b_factor_left = 1;
	if (tree->right)
		b_factor_right = binary_tree_height(tree->right);
	else
		b_factor_right = 1;
	return (b_factor_left - b_factor_right);
}
