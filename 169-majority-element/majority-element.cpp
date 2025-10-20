class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto i : ans){
            if(i.second>n) return i.first; 
        }
        return 0;
    }
};