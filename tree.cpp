#include <iostream>

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int data) {
    if (root == nullptr) {
        return new TreeNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left,data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

void inorderTraversal(TreeNode* root){
    if (root != nullptr) {
        inorderTraversal(root->left);
        std::cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    std::cout << "Inorder traversal of the binary tree: ";
    inorderTraversal(root);
    std::cout << std::endl;
    
    return 0;
}