class Solution {
public:
    int binaryGap(int n) {
        int check = -1;
        int ans = 0;
        int pos = 0;
        
        while(n){
            if(n & 1){
                if(check != -1)
                    ans = max(ans, pos - check);
                check = pos;
            }
            n >>= 1;
            pos++;
        }
        return ans;
    }
};