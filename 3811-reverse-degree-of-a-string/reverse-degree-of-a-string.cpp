class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        for(int i=0;i<(int)s.size();i++){
            int temp;
            temp = (26-(s[i]-'a'))*(i+1);
            ans+=temp;
        }
        return ans;
    }
};