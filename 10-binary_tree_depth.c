#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	if (tree->parent)
	{
		parent = binary_tree_depth(tree->parent);
		parent++;
	}
	return (parent);
}
