class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> temp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            temp[nums[i]]++;
        }
        for(auto i:temp){
            if(i.second==2) ans.push_back(i.first);
        }
        return ans;
    }
};