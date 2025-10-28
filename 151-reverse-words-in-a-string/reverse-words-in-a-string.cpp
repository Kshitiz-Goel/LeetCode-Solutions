class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        string ans="";
        string word="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') word+=s[i];
            else if(word.size()){
                ans+=word+" ";
                word="";
            }
        }
        ans+=word;
        if(ans[ans.size()-1]==' ') ans.pop_back();
        int start=0,end=1;
        s=ans;
        while(end!=s.size()){
            if(s[end]==' '){
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
            }
            end++;
        }
        reverse(s.begin()+start,s.end());
        
        return s;
    }
};