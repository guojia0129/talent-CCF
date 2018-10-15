/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int fs(TreeNode* root){
        if(root==NULL) return 0;
        return max(fs(root->left),fs(root->right))+1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int l = fs(root->left);
        int r = fs(root->right);
        if(abs(l-r)>1) return false;
        else return isBalanced(root->right)&&isBalanced(root->left);
    }
};