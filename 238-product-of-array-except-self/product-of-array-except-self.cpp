class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<nums.size()-1;i++){
            ans.push_back(nums[i]*ans[i]);
        }
        int suffix = 1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]=suffix*ans[i];
            suffix*=nums[i];
        }
        return ans;

    }
};