class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minnum = 100000, maxnum = -100000;
        int minidx, maxidx;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minnum) {
                minidx = i;
                minnum = nums[i];
            }
            if (nums[i] > maxnum) {
                maxidx = i;
                maxnum = nums[i];
            }
        }
        int low = min(minidx, maxidx);
        int high = max(minidx, maxidx);
        int front = high + 1;
        int back = nums.size() - low;
        int fromboth = (low + 1) + (nums.size() - high);
        return min({front, back, fromboth});
    }
};