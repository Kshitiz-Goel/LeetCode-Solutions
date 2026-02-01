class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int first_min = nums[0];
        int sec_min = 51;
        int third_min = 51;
        for(int i=1; i<nums.size() ; i++){
            if(nums[i] < sec_min){ 
                third_min = sec_min;
                sec_min = nums[i];
            }
            else if(nums[i] < third_min ) third_min = nums[i];
        }
        return first_min+sec_min+third_min;
    }
};