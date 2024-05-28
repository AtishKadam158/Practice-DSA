#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

void inorderTraversal(TreeNode* root) {
    if (!root) return;
    stack<TreeNode*> stack;
    TreeNode* current = root;
    while (current || !stack.empty()) {
        while (current) {
            stack.push(current);
            current = current->left;
        }

        current = stack.top();
        stack.pop();

        cout << current->val << " ";

        current = current->right;
    }
}

void preorderTraversal(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> stack;
    stack.push(root);

    while (!stack.empty()) {
        TreeNode* current = stack.top();
        stack.pop();

        cout << current->val << " ";

        if (current->right) stack.push(current->right);
        if (current->left) stack.push(current->left);
    }
}

void postorderTraversal(TreeNode* root) {
    if (!root) return;

    stack<TreeNode*> stack1, stack2;
    stack1.push(root);

    while (!stack1.empty()) {
        TreeNode* current = stack1.top();
        stack1.pop();
        stack2.push(current);

        if (current->left) stack1.push(current->left);
        if (current->right) stack1.push(current->right);
    }

    while (!stack2.empty()) {
        cout << stack2.top()->val << " ";
        stack2.pop();
    }
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << std::endl;

    return 0;
}
