class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int> temp(nums.size()+1,0);
        for(int i=0; i<nums.size();i++){
            temp[nums[i]]++;
        }
        for(int i=1;i<nums.size()+1;i++){
            if(temp[i]==0) ans.push_back(i);
        }
        return ans;
    }
};