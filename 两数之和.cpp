class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //int *res = (int*)malloc(2*sizeof(int));
        vector<int> res(2);
        for(int i=0;i<(nums.size()-1);i++)
        {
            for(int j=i+1;j<(nums.size());j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    //return new int[]{i,j};
                    res[0] = i;
                    res[1] = j;
                    return res;
                }
                    
                    //int a[2] = new int[]{i,j};
                   // return new vector<int> (a,a+2);
            }
            
        }
        //throw new IllegalAccessError("No two solution");
        
    }
};