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
    int goodNodes(TreeNode* root) {
        int count=0;
        if(root==NULL) return NULL;
        countnodes(root,count,root->val);
        return count;
    }

    void countnodes(TreeNode *root,int &count,int maxfor){
        if(root==NULL) return ;
        if(root->val>=maxfor){
            count++;
            maxfor=root->val;
        }
        countnodes(root->left,count,maxfor);
        countnodes(root->right,count,maxfor);
    }
};
