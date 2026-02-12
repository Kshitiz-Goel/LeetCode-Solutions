class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,-1);
        stack<int> s;
        for(int i=2*n-1;i>=0;i--){
            int curr=nums[i%n];
            while(!s.empty() && s.top()<=curr){
                s.pop();
            }
            if(i<n){
            if(!s.empty()){
                res[i]=s.top();
                }
            }
            s.push(curr);
        }
        return res;
    }
};