#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
/**
 * binary_tree_levelorder - traverse a binary tree using level-order traversal
 * @tree: a pointer to the root of the tree to traverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp;
	size_t front = 0, back = 0, tree_size;
	const binary_tree_t **queue;

	if (!tree || !func)
		return;
	tree_size = binary_tree_size(tree);
	queue = malloc(sizeof(*queue) * tree_size);
	if (!queue)
		return;
	queue[back] = tree;
	while (front <= back && front < tree_size)
	{
		temp = queue[front];
		front++;
		func(temp->n);
		if (temp->left)
		{
			back++;
			queue[back] = temp->left;
		}
		if (temp->right)
		{
			back++;
			queue[back] = temp->right;
		}
	}
	free(queue);
}
