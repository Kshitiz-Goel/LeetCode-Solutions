class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> temp;
        vector<int> ans;
        for(int i=0;i<friends.size();i++){
            temp[friends[i]]++;
        }
        for(int i =0;i<order.size();i++){
            if(temp[order[i]]) ans.push_back(order[i]);
        }
        return ans;
    }
};