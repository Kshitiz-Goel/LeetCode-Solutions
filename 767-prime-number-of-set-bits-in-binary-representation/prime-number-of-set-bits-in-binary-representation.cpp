class Solution {
public:
    bool isPrime(int val){
        if(val==2) return true;
        if(val<=1 || val%2==0) return false;
        for(int j=3;j<=sqrt(val);j+=2){
            if(val%j==0) return false;
        }
        return true;
    }
    bool countSetBit(int num){
        int sum=0;
        while(num){
            if(num&1) sum++;
            num = num>>1; 
        }
        if(isPrime(sum)) return true;
        return false; 
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            if(countSetBit(i)) count++;

        }
        return count;
    }
};