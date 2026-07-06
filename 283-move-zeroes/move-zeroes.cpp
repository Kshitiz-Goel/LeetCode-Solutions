class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[nonzero]=nums[i];
                if(i!=nonzero){
                    nums[i]= 0;
                }
                nonzero++;
            }
        }
    }
};