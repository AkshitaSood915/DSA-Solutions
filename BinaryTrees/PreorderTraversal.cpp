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

void preorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;

    ans.push_back(root->val);

    preorder(root->left, ans);
    preorder(root->right, ans);
}

int main() {
    cout << "Enter tree nodes in preorder (-1 for NULL): ";

    TreeNode* root = buildTree();

    vector<int> ans;

    preorder(root, ans);

    cout << "Preorder Traversal: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}