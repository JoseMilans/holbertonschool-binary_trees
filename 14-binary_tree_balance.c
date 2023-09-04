#include "binary_trees.h"

/**
 * binary_tree_height: height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (1 + left);
	return (1 + right);
}

/**
 * binary_tree_balance: balance factor of tree
 * @tree: pointer to root node
 * Return: height or 0
*/

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
	    return (0);

    return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}