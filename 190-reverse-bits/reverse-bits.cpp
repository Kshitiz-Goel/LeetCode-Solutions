class Solution {
public:
    int reverseBits(int n) {    
        int temp=0;
        int k=31;
        while(n!=0){
            if((n&1)==1){
                temp=temp+pow(2,k);
            }
            n=n>>1;
            k--;
        }
    return temp;
    }
};