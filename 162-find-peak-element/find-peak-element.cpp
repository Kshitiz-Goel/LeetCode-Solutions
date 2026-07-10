class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==2){
            return nums[0]>nums[1]? 0: 1;
        }
        for (int i=1;i<n-1;i++){
            if((nums[i-1]<nums[i] && nums[i]>nums[i+1]) || (nums[i]<nums[i+1] && i==n-1) ){
                return i;
            }
            else if (nums[i-1]>nums[i] && i==1){
                return i-1;
            }
        }
        return n-1;
    }
};