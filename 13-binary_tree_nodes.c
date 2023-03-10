#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaf_nodes;

	if (tree == NULL)
		return (0);
	leaf_nodes = binary_tree_nodes(tree->left);
	leaf_nodes += binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		leaf_nodes += 1;
	return (leaf_nodes);
}
