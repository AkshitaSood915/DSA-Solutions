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

void postorder(TreeNode* root, vector<int>& ans) {
    if (root == NULL)
        return;

    postorder(root->left, ans);
    postorder(root->right, ans);
    ans.push_back(root->val);
}

int main() {
    cout << "Enter tree nodes in preorder (-1 for NULL): ";

    TreeNode* root = buildTree();

    vector<int> ans;

    postorder(root, ans);

    cout << "Postorder Traversal: ";

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}