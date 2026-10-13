class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> abs;
        for(int i=0;i<(int)nums.size();i++){
            if(nums[i]<0) abs.push_back(nums[i]*(-1));
            else abs.push_back(nums[i]);
        }
        sort(abs.begin(),abs.end());
        long long ans = 0;
        for(int i=0;i<(int)abs.size()/2;i++){
            ans-=abs[i]*abs[i];
        }
        for(int i=(int)abs.size()/2;i<(int)abs.size();i++){
            ans+=abs[i]*abs[i];
        }
        return ans;
    }
};