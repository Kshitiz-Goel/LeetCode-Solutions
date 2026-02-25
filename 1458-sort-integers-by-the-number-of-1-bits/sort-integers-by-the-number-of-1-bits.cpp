class Solution {
private:
    static bool comparator(int a , int b){
        int a1=__builtin_popcount(a);
        int b1=__builtin_popcount(b);
        if(a1<b1){
            return true;
        }
        if(a1>b1){
            return false;
        }
        return a<b;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),comparator);
        return arr;
    }
};