class Solution {
public:
    int numSteps(string s) {
        int n=s.size();
        int steps=0;
        while(s!="1"){
            if(s.back()=='0') s.pop_back();
            else{
                int temp = s.size()-1;
                while(temp>-1 && s[temp]=='1'){
                    s[temp]='0';
                    temp--;
                }
                if(temp==-1){
                    s='1'+s;
                }
                else{
                    s[temp] = '1';
                }
            }
            steps++;
        }
        return steps;
    }
};