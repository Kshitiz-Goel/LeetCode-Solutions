class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=(n&1);
        n=n>>1;
        while(n){
            if((n&1)==prev){
                cout << (n&1);
                return false;
            }
            else{
                prev=n&1;
                n=n>>1;
            }
        }
        return true;
    }
};