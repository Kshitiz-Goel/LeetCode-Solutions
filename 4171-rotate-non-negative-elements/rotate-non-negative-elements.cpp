class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> idx;
        vector<int> val;
      for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                idx.push_back(i);
                val.push_back(nums[i]);
            }
        }
        
        int n = val.size();
        if(n<=1) return nums;
        k=k%n;
        if(k==0) return nums;
        rotate(val.begin() , val.begin()+k, val.end());
        for(int i=0;i<idx.size();i++){
            nums[idx[i]] = val[i];
        }
        return nums;
    }
};