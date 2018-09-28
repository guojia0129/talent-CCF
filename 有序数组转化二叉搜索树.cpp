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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()) return NULL;
        
        TreeNode* root = new TreeNode(nums[nums.size()/2]);
        vector<int> l = vector<int>(nums.begin(),nums.begin()+nums.size()/2);
        vector<int> r = vector<int>(nums.begin()+nums.size()/2+1,nums.end());
        root->left = sortedArrayToBST(l);
        root->right = sortedArrayToBST(r);
        
        return root;
    }
};