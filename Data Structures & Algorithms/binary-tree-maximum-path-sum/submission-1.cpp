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
    int ma;

    int maxPath(TreeNode* root){
        if(root == nullptr) return 0;

        int a = maxPath(root->left);
        int b = maxPath(root->right);
        a = max(a,0);
        b = max(b,0);
        ma = max(ma, a+b+root->val);
        return max(a,b)+root->val;
    }

    int maxPathSum(TreeNode* root) {

        ma = INT_MIN;
        maxPath(root);
        return ma;

    }
};
