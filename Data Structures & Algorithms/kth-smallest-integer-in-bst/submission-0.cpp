/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    void findinbst(TreeNode* root, int& k, int& ans){
        if(root ==nullptr || k<0)
        return;
        findinbst(root->left,k,ans);
        k--;
        if(k==0)
        ans = root->val;
        findinbst(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        findinbst(root,k,ans);
        return ans;
    }
};
