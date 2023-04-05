# 0x1D. C - Binary Trees

## Tasks
* ### 0. New Node
  *	**Description:** Write a function that creates a binary tree node
  *	**Prototype:** `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
    - Where `parent` is a pointer to the parent node of the node to create
    - And `value` is the value to put in the new node
    - When created, a node does not have any child
    - The function must return a pointer to the new node, or `NULL` on failure
  * **File:** `0-binary_tree_node.c`

* ### 1. Insert Left
  *	**Description:** Write a function that inserts a node as the left-child of another node
  * **Prototype:** `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
    - Where `parent` is a pointer to the parent node of the node to create
    - And `value` is the value to put in the new node
    - When created, a node does not have any child
    - The function must return a pointer to the created node, or `NULL` on failure, or if `parent` is `NULL`
    - If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node
  * **File:** `1-binary_tree-insert_left.c`

* ### 2. Insert Right
  *	**Description:** Write a function that inserts a node as the right-child of another node
  *	**Prototype:** `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
	  - Where `parent` is a pointer to the parent node of the node to create
	  - And `value` is the value to put in the new node
	  - When created, a node does not have any child
	  - The function must return a pointer to the created node, or `NULL` on failure, or if `parent` is `NULL`
	  - If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
  * **File:** `2-binary_tree-insert_right.c`

* ### 3. Delete
  * **Description:** Write a function that deletes an entire binary tree
  * **Prototype:** `void binary_tree_delete(binary_tree_t *tree);`
	  - Where `tree` is a pointer to the root node of the tree to delete
	  - Do nothing if `tree` is `NULL`
  * **File:** `3-binary_tree_delete.c`

* ### 4. Is leaf
  * **Description:** Write a function that checks if a node is a leaf
  * **Prototype:** `int binary_tree_is_leaf(const binary_tree_t *node);`
    - `node` is a pointer to the node to check
    - Return `1` if `node` is a leaf, otherwise `0`
    - Return `0` if `node` is `NULL`
  * **File:** `4-binary_tree_is_leaf.c`

* ### 5. Is root
  * **Description:** Write a function that checks if a given node is a root
  * **Prototype:** `int binary_tree_is_root(const binary_tree_t *node);`
    - `node` is a pointer to the node to check
    - Return `1` if `node` is a root, otherwise `0`
    - Return `0` if `node` is `NULL`
  * **File:** `5-binary_tree_is_root.c`

* ### 6. Pre-order Traversal
  * **Description:** Write a function that goes through a binary tree using pre-order traversal
  * **Prototype:** `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
    - `tree` is a pointer to the root node of the tree to traverse
    - `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If `tree` or `func` is `NULL`, do nothing
  * **File:** `6-binary_tree_preorder.c`

* ### 7. In-order Traversal
  * **Description:** Write a function that goes through a binary tree using in-order traversal
  * **Prototype:** `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
    - `tree` is a pointer to the root node of the tree to traverse
    - `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If `tree` or `func` is `NULL`, do nothing
  * **File:** `7-binary_tree_inorder.c`

* ### 8. Post-order Traversal
  * **Description:** Write a function that goes through a binary tree using post-order traversal
  * **Prototype:** `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
    - `tree` is a pointer to the root node of the tree to traverse
    - `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
    - If `tree` or `func` is `NULL`, do nothing
  * **File:** `8-binary_tree_postorder.c`