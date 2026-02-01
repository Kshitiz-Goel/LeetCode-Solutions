class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> temp;
        for(int i=0; i<nums.size();i++){
            temp[nums[i]]++;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(temp[i]>=1) continue;
            else ans.push_back(i);
        }
        return ans;
    }
};