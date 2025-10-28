class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int start=0,end=1;
        while(end!=s.size()){
            if(s[end]!=' ') end++;
            else if(s[end]==' '){
                cout<<"reversed";
                reverse(s.begin()+start,s.begin()+end);
                start=end+1;
                while(end==' ') end++;
                end++;
            }
        }
        if(end=s.size()-1){
            reverse(s.begin()+start,s.begin()+end+1);
        }
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
        return ans;
    }
};