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
    bool isBalanced(TreeNode* root) {
        return balance(root)!=-1;
    }
    int balance(TreeNode* node){
        if(node==nullptr) return false;
        
        int ls=balance(node->left);
        int rs=balance(node->right);
        if(ls==-1||rs==-1){
            return -1;
        }
        if(abs(ls-rs)>1){
            return -1;
        }
        return 1+max(ls,rs);
    }
};
