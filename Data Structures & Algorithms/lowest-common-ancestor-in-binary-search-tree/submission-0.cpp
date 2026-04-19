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
    bool findNode(TreeNode* root, TreeNode* p,stack<TreeNode*> &s ){
        if(root == nullptr)
        return false;

        if(root == p || findNode(root->left,p,s) || findNode(root->right,p,s) ){
            s.push(root);
            return true; 
        }
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == nullptr)
        return nullptr;

        stack<TreeNode*>sp;
        stack<TreeNode*>sq;

        findNode(root,p,sp);
        findNode(root,q,sq);
        
        TreeNode* ans = nullptr;
        while(sp.size() && sq.size())
        {
            if(sp.top() != sq.top())
            {
                break;
            }
            ans = sp.top();
            sp.pop();
            sq.pop();
        }
        return ans;

    }
};
