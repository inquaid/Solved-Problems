// Your C++ code goes here
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
  public:
    void inorder(TreeNode *root, vector<int> &v) {
        if (root == nullptr)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }

    bool isValidBST(TreeNode *root) {
        vector<int> temp;
        inorder(root, temp);
        for (int i = 0; i < temp.size() - 1; i++) {
            if (temp[i] >= temp[i + 1])
                return 0;
        }
        return 1;
    }
};