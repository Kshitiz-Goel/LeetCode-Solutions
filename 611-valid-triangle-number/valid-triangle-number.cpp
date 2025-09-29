class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        if(nums.size()<=2) return count;
        int maxi=nums.size()-1;
        while(maxi>=2){
            int right=maxi-1,left=0;
            while(left<right){
                if(nums[left]+nums[right]>nums[maxi]){
                    count+=right-left;
                    right--;
                }
                else{
                    left++;
                } 
            }
            maxi--;
        }

        return count;
    }
};