class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); i++) {
            int mod = (nums[i] % value + value) % value;
            temp[mod]++;
        }
        int num = 0;
        while (true) {
            int mod = num % value;
            if (temp[mod] == 0)
                return num;
            temp[mod]--;
            num++;
        }
    }
};