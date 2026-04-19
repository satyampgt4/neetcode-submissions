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

    bool same(TreeNode* p , TreeNode* q ){
        if(p!= nullptr && q!= nullptr)
        return p->val == q->val && same(p->left,q->left) && same(p->right,q->right);

        if(p==nullptr && q == nullptr)
        return true;

        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root ==nullptr)
        {
            if(subRoot==nullptr) return true;
            return false;
        }
       return same(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
