// BST and AVL Implementation Template
// Instructions: Implement the missing function definitions for each class.
// Each function has comments indicating what it should do.

#include <functional>
#include <iostream>
#include <queue>

// Binary Search Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;  // For AVL Tree

    Node(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
};

// Binary Search Tree Implementation
class BST {
private:
    Node* root;

    // TODO: Implement private helper functions
    Node* insertRec(Node* node, int value) {
        // TODO: Implement recursive insert
        if (!node) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else if (value > node->data) {
            node->right = insertRec(node->right, value);
        }
        return node;
    }

    Node* findMin(Node* node) {
        // TODO: Implement find minimum node
        while (node && node->left) {
            node = node->left;
        }
        return node;
    }

    Node* deleteRec(Node* node, int value) {
        // TODO: Implement recursive delete
        if (!node) {
            return node;
        }
        if (value < node->data) {
            node->left = deleteRec(node->left, value);
        } else if (value > node->data) {
            node->right = deleteRec(node->right, value);
        } else {
            if (!node->left) {
                Node *p = node->right;
                delete node;
                return p;
            } else if (!node->right) {
                Node *p = node->left;
                delete node;
                return p;
            }
            Node *p = findMin(node->right);
            node->data = p->data;
            node->right = deleteRec(node->right, p->data);
        }
        return node;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
        if (node) {
            inorderRec(node->left);
            std::cout << node->data << ' ';
            inorderRec(node->right);
        }
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
        if (node) {
            clearRec(node->left);
            clearRec(node->right);
            delete node;
        }
    }

public:
    BST() : root(nullptr) {}

    ~BST() {
        // TODO: Implement destructor
        clearRec(root);
    }

    void insert(int value) {
        // TODO: Implement insert
        root = insertRec(root, value);
    }

    void remove(int value) {
        // TODO: Implement remove
        root = deleteRec(root, value);
    }

    bool search(int value) {
        // TODO: Implement search
        Node *p = root;
        while (p) {
            if (p->data == value) {
                return true;
            } else if (value < p->data) {
                p = p->left;
            } else {
                p = p->right;
            }
        }
        return false;
    }

    void inorder() {
        // TODO: Implement inorder traversal
        inorderRec(root);
        std::cout << '\n';
    }
};

// AVL Tree Implementation
class AVLTree {
private:
    Node* root;

    int height(Node* node) {
        // TODO: Implement height calculation
        if (node) {
            return node->height;
        }
        return 0;
    }

    int getBalance(Node* node) {
        // TODO: Implement balance factor calculation
        if (node) {
            return height(node->left) - height(node->right);
        }
        return 0;
    }

    Node* rightRotate(Node* y) {
        Node *x = y->left;
        y->left = x->right;
        x->right = y;
        x->height = 1 + std::max(height(x->left), height(x->right));
        y->height = 1 + std::max(height(y->left), height(y->right));
        return x;
    }

    Node* leftRotate(Node* x) {
        // TODO: Implement left rotation
        Node *y = x->right;
        x->right = y->left;
        y->left = x;
        x->height = 1 + std::max(height(x->left), height(x->right));
        y->height = 1 + std::max(height(y->left), height(y->right));
        return y;
    }

    Node* insertRec(Node* node, int value) {
        // TODO: Implement recursive AVL insert with balancing
        if (!node) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertRec(node->left, value);
        } else {
            node->right = insertRec(node->right, value);
        }
        node->height = 1 + std::max(height(node->left), height(node->right));
        if (getBalance(node) > 1) {
            if (value >= node->left->data) {
                node->left = leftRotate(node->left);
            }
            return rightRotate(node);
        } else if (getBalance(node) < -1) {
            if (value < node->right->data) {
                node->right = rightRotate(node->right);
            }
            return leftRotate(node);
        }
        return node;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
        if (node) {
            inorderRec(node->left);
            std::cout << node->data << ' ';
            inorderRec(node->right);
        }
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
        if (node) {
            clearRec(node->left);
            clearRec(node->right);
            delete node;
        }
    }

public:
    AVLTree() : root(nullptr) {}

    ~AVLTree() {
        // TODO: Implement destructor
        clearRec(root);
    }

    void insert(int value) {
        // TODO: Implement insert
        root = insertRec(root, value);
    }

    void inorder() {
        // TODO: Implement inorder traversal
        inorderRec(root);
        std::cout << '\n';
    }

    bool isBalanced() {
        // TODO: Implement balance check
        int balance = getBalance(root);
        return abs(balance) <= 1;
    }
};

// Testing function - DO NOT MODIFY
void testTrees() {
    std::cout << "Testing Binary Search Tree:\n";
    BST bst;
    
    // Insert elements
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    
    std::cout << "Inorder traversal: ";
    bst.inorder();
    
    std::cout << "Search 30: " << (bst.search(30) ? "Found" : "Not found") << std::endl;
    std::cout << "Search 90: " << (bst.search(90) ? "Found" : "Not found") << std::endl;
    
    bst.remove(30);
    std::cout << "After removing 30, inorder traversal: ";
    bst.inorder();

    std::cout << "\nTesting AVL Tree:\n";
    AVLTree avl;
    
    // Insert elements that would cause rotations
    avl.insert(10);
    avl.insert(20);
    avl.insert(30);
    avl.insert(40);
    avl.insert(50);
    
    std::cout << "Inorder traversal: ";
    avl.inorder();
    
    std::cout << "Is tree balanced? " << (avl.isBalanced() ? "Yes" : "No") << std::endl;
}

int main() {
    testTrees();
    return 0;
}