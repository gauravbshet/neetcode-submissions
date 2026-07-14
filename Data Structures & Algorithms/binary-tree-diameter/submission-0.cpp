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
    int diamter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diamter;
    }
    int height(TreeNode* node){
        if(node==nullptr) return 0;
        int lh= height(node->left);
        int rh= height(node->right);
        diamter=max(diamter,lh+rh);
        return 1+max(lh,rh);
    }
};
