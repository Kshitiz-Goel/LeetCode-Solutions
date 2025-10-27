class Solution {
public:
    bool hasSameDigits(string s) {
        string temp = "";
        while (s.size() != 2) {
            for (int i = 0; i < s.size() - 1; i++) {
                int first = s[i] - '0';
                int second = s[i + 1] - '0';
                int digit = (first + second) % 10;
                temp += to_string(digit);
            }
            s = temp;
            temp = "";
        }
        if (s[0] == s[1])
            return true;
        return false;
    }
};