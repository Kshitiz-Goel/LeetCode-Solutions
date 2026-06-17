class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            // vector<int> temp;
            if(i>0 && (nums[i]==nums[i-1])){
                continue;
            }
            int j=i+1,k=nums.size()-1;
            
            long long sum = -1LL*nums[i];
            while(j<k){
                long long s = nums[j]+nums[k];
                if(s==sum){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    while(k<nums.size() && nums[k]==nums[k+1]){
                        k--;
                    }
                    

                }
                else if(s < sum){
                    j++;
                }
                else{
                    k--;
                }

            }
        }
        return ans;
    }
};