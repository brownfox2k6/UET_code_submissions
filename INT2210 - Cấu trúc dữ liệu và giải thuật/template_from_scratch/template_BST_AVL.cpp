// BST and AVL Implementation Template
// Instructions: Implement the missing function definitions for each class.
// Each function has comments indicating what it should do.

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
        return nullptr;
    }

    Node* findMin(Node* node) {
        // TODO: Implement find minimum node
        return nullptr;
    }

    Node* deleteRec(Node* node, int value) {
        // TODO: Implement recursive delete
        return nullptr;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
    }

public:
    BST() : root(nullptr) {}

    ~BST() {
        // TODO: Implement destructor
    }

    void insert(int value) {
        // TODO: Implement insert
    }

    void remove(int value) {
        // TODO: Implement remove
    }

    bool search(int value) {
        // TODO: Implement search
        return false;
    }

    void inorder() {
        // TODO: Implement inorder traversal
    }
};

// AVL Tree Implementation
class AVLTree {
private:
    Node* root;

    int height(Node* node) {
        // TODO: Implement height calculation
        return 0;
    }

    int getBalance(Node* node) {
        // TODO: Implement balance factor calculation
        return 0;
    }

    Node* rightRotate(Node* y) {
        // TODO: Implement right rotation
        return nullptr;
    }

    Node* leftRotate(Node* x) {
        // TODO: Implement left rotation
        return nullptr;
    }

    Node* insertRec(Node* node, int value) {
        // TODO: Implement recursive AVL insert with balancing
        return nullptr;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
    }

public:
    AVLTree() : root(nullptr) {}

    ~AVLTree() {
        // TODO: Implement destructor
    }

    void insert(int value) {
        // TODO: Implement insert
    }

    void inorder() {
        // TODO: Implement inorder traversal
    }

    bool isBalanced() {
        // TODO: Implement balance check
        return false;
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
