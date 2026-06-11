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
        return getHeight(root)!= -1;
    }
    int getHeight(TreeNode* root){
        if(root==nullptr) return 0;

        int leftsub = getHeight(root->left);
        int rightsub = getHeight(root->right);
        if(leftsub==-1 || rightsub==-1){
            return -1;
        }
        if(abs(leftsub-rightsub)>1){
            return -1;
        }

        return 1+max(leftsub,rightsub);
    }
};
