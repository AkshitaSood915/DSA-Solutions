#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;

    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            vector<int> level;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();

                if (node->left)
                    q.push(node->left);

                if (node->right)
                    q.push(node->right);

                level.push_back(node->val);
            }

            ans.push_back(level);
        }

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    vector<TreeNode*> nodes(n + 1, NULL);

    for (int i = 1; i <= n; i++)
        nodes[i] = new TreeNode(i);

    for (int i = 1; i <= n; i++) {
        int l, r;
        cout << "Enter left and right child of " << i << " (-1 if NULL): ";
        cin >> l >> r;

        if (l != -1)
            nodes[i]->left = nodes[l];

        if (r != -1)
            nodes[i]->right = nodes[r];
    }

    Solution obj;
    vector<vector<int>> ans = obj.levelOrder(nodes[1]);

    cout << "\nLevel Order Traversal:\n";
    for (auto level : ans) {
        for (int x : level)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}