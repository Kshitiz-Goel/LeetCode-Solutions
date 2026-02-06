class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mapt;
        unordered_map<char,char> maps;
        bool ans = true;
        for(int i=0 ; i<s.size();i++){
            if(mapt[s[i]]==NULL)
            mapt[s[i]]=t[i];
            else{
                if(mapt[s[i]]==t[i]) continue;
                else ans=false;
            }
        }
        for(int i=0 ; i<t.size();i++){
            if(maps[t[i]]==NULL)
            maps[t[i]]=s[i];
            else{
                if(maps[t[i]]==s[i]) continue;
                else ans=false;
            }
        }
        return ans;
    }
};