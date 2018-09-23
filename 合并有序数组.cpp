class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums[m+n];
        int i = 0, j = 0;
        int flag = 0;
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                nums[flag++] = nums1[i++];
            }else {
                nums[flag++] = nums2[j++];
            }
        }
        while(i<m){
            nums[flag++] = nums1[i++];
        }
        while(j<n){
            nums[flag++] = nums2[j++];
        }
        //return nums;
        //nums1.swap(nums);
        copy(nums,nums+m+n,nums1.begin());
    }
};