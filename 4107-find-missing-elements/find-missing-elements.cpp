class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int n=nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=n){
                i--;
                ans.push_back(n);
                n++;
            }
            else n++;
        }
        return ans;
    }
};