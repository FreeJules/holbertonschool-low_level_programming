#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise, if tree is NULL, return 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bst_helper(tree, INT_MIN, INT_MAX));
}
/**
 * bst_helper - checks if tree is a BST and its values are >= min and <= max
 * @node: pointer to the root node of the tree to check
 * @min: lower int limit
 * @max: upper int limit
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int bst_helper(const binary_tree_t *node, int min, int max)
{
	/* an empty tree is BST */
	if (node == NULL)
		return (1);
	/* false if this node violates the min/max constraint */
	if (node->n < min || node->n > max)
		return (0);
	/* check the subtrees recursively, tightening the constraint */
	/* Allow only distinct values with +/-1 */
	return (bst_helper(node->left, min, node->n - 1) &&
		bst_helper(node->right, node->n + 1, max));
}
