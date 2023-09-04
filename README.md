# Binary Trees
C - Binary Trees

This project is about dealing with simple binary trees, thus they don’t follow any kind of rule. GitHub repository, holbertonschool-binary_trees, contains the C files.

## Table of Contents

- [About](#about)
- [Files](#files)
- [Usage](#usage)
- [Authors](#authors)

## About

A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child. This project contains the C functions necessary for creating and manipulating binary trees.

## Files

### binary_trees.h

Header file containing the declarations of all functions and the structure of a binary tree node.

- `struct binary_tree_s`: The structure for a binary tree node.
- `binary_tree_t`: Typedef for struct binary_tree_s.

### 0-binary_tree_node.c

Contains the `binary_tree_node` function.

- `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)`: Creates a binary tree node.

### 1-binary_tree_insert_left.c

Contains the `binary_tree_insert_left` function.

- `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)`: Inserts a node as the left child of another node.

### 2-binary_tree_insert_right.c

Contains the `binary_tree_insert_right` function.

- `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)`: Inserts a node as the right child of another node.

### 3-binary_tree_delete.c

Contains the `binary_tree_delete` function.

- `void binary_tree_delete(binary_tree_t *tree)`: Deletes an entire binary tree.

### 4-binary_tree_is_leaf.c

Contains the `binary_tree_is_leaf` function.

- `int binary_tree_is_leaf(const binary_tree_t *node)`: Checks if a node is a leaf.

### 5-binary_tree_is_root.c

Contains the `binary_tree_is_root` function.

- `int binary_tree_is_root(const binary_tree_t *node)`: Checks if a node is the root.

### 6-binary_tree_preorder.c

Contains the `binary_tree_preorder` function.

- `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))`: Goes through a binary tree using pre-order traversal.

### 7-binary_tree_inorder.c

Contains the `binary_tree_inorder` function.

- `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))`: Goes through a binary tree using in-order traversal.

### 8-binary_tree_postorder.c

Contains the `binary_tree_postorder` function.

- `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))`: Goes through a binary tree using post-order traversal.

### 9-binary_tree_height.c

Contains the `binary_tree_height` function.

- `size_t binary_tree_height(const binary_tree_t *tree)`: Measures the height of a binary tree.

### 10-binary_tree_depth.c

Contains the `binary_tree_depth` function.

- `size_t binary_tree_depth(const binary_tree_t *tree)`: Measures the depth of a node in a binary tree.

### 11-binary_tree_size.c

Contains the `binary_tree_size` function.

- `size_t binary_tree_size(const binary_tree_t *tree)`: Measures the size of a binary tree.

### 12-binary_tree_leaves.c

Contains the `binary_tree_leaves` function.

- `size_t binary_tree_leaves(const binary_tree_t *tree)`: Counts the leaves in a binary tree.

### 13-binary_tree_nodes.c

Contains the `binary_tree_nodes` function.

- `size_t binary_tree_nodes(const binary_tree_t *tree)`: Counts the nodes with at least 1 child in a binary tree.

### 14-binary_tree_balance.c

Contains the `binary_tree_balance` function.

- `int binary_tree_balance(const binary_tree_t *tree)`: Measures the balance factor of a binary tree.

### 15-binary_tree_is_full.c

Contains the `binary_tree_is_full` function.

- `int binary_tree_is_full(const binary_tree_t *tree)`: Checks if a binary tree is full.

### 16-binary_tree_is_perfect.c

Contains the `binary_tree_is_perfect` and `binary_tree_height` functions.

- `int binary_tree_is_perfect(const binary_tree_t *tree)`: Checks if a binary tree is perfect.
- `size_t binary_tree_height(const binary_tree_t *tree)`: Measures the height of a binary tree.

### 17-binary_tree_sibling.c

Contains the `binary_tree_sibling` function.

- `binary_tree_t *binary_tree_sibling(binary_tree_t *node)`: Finds the sibling of a node.

### (task number)-main.c (Not to be pushed to the repo)

Example main files for testing each function respectively.

## Usage

- All the files are to be compiled on Ubuntu 20.04 LTS.
- Files will be compiled using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Authors

>* Jose Milans (6764@holbertonstudents.com)
>* Nicolás Valles (6328@holbertonstudents.com)
