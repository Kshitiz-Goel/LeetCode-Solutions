class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long int maxi=0;
        long long int temp=0;
    	for(int i=0;i<nums.size();i++){
            if(nums[i]==1) temp++;
            else{
                maxi=max(maxi, temp);
                temp=0;
                }
            }   
        return max(maxi,temp);
    }
};