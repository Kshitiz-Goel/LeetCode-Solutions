class Solution {
public:
    int smallestNumber(int n) {
        if(n==1) return 1;
        int power=0;
        int small=1;
        while(small<=n){
            small*=2;
            power++;
        }
        return pow(2,power)-1;
    }
};