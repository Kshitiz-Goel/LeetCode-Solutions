class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long result = 0;
        
        for (int i = 1; i <= n; i++) {
            int bits = log2(i) + 1;   // number of bits in i
            result = ((result << bits) % MOD + i) % MOD;
        }
        
        return result;
    }
};