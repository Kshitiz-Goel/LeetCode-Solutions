class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int temp;
            if(nums[i]>0) temp=(i+nums[i])%nums.size();
            else if(nums[i]<0) temp=(i+(nums.size()-(abs(nums[i]))%nums.size()))%nums.size();
            else temp=i;
            ans.push_back(nums[temp]);
        }
    return ans;
    }
};