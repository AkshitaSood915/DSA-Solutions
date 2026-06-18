#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* buildTree() {
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    TreeNode* root = new TreeNode(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

void inorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;

    inorder(root->left, ans);   // Left
    ans.push_back(root->val);   // Root
    inorder(root->right, ans);  // Right
}

int main() {
    cout << "Enter tree nodes in preorder (-1 for NULL): ";

    TreeNode* root = buildTree();

    vector<int> ans;

    inorder(root, ans);

    cout << "Inorder Traversal: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}