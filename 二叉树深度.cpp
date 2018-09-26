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
    int maxDepth(TreeNode* root) {
        int d = 0;
        if(root!=NULL){
            d++;
            int d1 = maxDepth(root->left);
            int d2 = maxDepth(root->right);
            d += d1>d2?d1:d2;
        }
        return d;
    }
};