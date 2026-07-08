#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;

        if (root == NULL)
            return preorder;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            root = st.top();
            st.pop();

            preorder.push_back(root->val);

            if (root->right != NULL)
                st.push(root->right);

            if (root->left != NULL)
                st.push(root->left);
        }

        return preorder;
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<TreeNode*> nodes(n + 1);

    for (int i = 1; i <= n; i++)
        nodes[i] = new TreeNode(i);

    for (int i = 1; i <= n; i++) {
        int l, r;
        cout << "Enter left and right child of node " << i << " (-1 if NULL): ";
        cin >> l >> r;

        if (l != -1)
            nodes[i]->left = nodes[l];

        if (r != -1)
            nodes[i]->right = nodes[r];
    }

    Solution obj;
    vector<int> ans = obj.preorderTraversal(nodes[1]);

    cout << "\nPreorder Traversal: ";
    for (int x : ans)
        cout << x << " ";

    return 0;
}