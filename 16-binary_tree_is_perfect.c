#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: The root of the tree
 * Return: 1 if it is a perfect binary tree, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_left, tree_right, height_left, height_right;

	if (tree == NULL)
		return (0);
	tree_left = binary_tree_is_perfect(tree->left);
	tree_right = binary_tree_is_perfect(tree->right);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	if ((tree_left == tree_right) && (height_left == height_right))
		return (1);
	return (0);
}
