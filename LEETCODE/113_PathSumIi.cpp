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
    void f(TreeNode *root, int targetSum, vector<vector<int>> &res,
           vector<int> &temp) {
        if (root == nullptr)
            return;
        temp.push_back(root->val);
        int found = 0;
        if (root->left == nullptr and root->right == nullptr) {
            if (targetSum == root->val) {
                res.push_back(temp);
            }
        } else {
            f(root->left, targetSum - root->val, res, temp);
            f(root->right, targetSum - root->val, res, temp);
        }
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum) {
        vector<vector<int>> res;
        vector<int> temp;
        f(root, targetSum, res, temp);
        // cout << t;
        return res;
    }
};