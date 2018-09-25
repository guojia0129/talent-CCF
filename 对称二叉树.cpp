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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return isJudge(root->left,root->right);
    }
    bool isJudge(TreeNode* left,TreeNode* right){
        if(left==NULL||right==NULL){
            if(left==right) return true;
            else return false;
        }
        if(left->val!=right->val) return false;
        return isJudge(left->left,right->right)&&isJudge(left->right,right->left);
    }
};