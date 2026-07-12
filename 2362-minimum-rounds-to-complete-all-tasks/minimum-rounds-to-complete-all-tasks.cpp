class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        int ans=0;
        for (int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        for (auto it:mp){
            if(it.second==1){
                return -1;
            }
            ans+=(it.second+2)/3;
        }
        return ans;
    }
};