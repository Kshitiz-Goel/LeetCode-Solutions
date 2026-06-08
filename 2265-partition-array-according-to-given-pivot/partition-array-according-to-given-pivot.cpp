class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> ans(n,0);
        int s=0,l=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) ans[s++]=nums[i];
            else if(nums[i]>pivot) ans[l--]=nums[i];
        }
        for(int i=s;i<=l;i++){
            ans[i]=pivot;
        }
        reverse(ans.begin()+l+1,ans.end());
        return ans;
    }
};