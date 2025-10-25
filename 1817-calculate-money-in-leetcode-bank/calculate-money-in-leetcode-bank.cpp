class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        int weeks=n/7;
        int days=n%7;
        for(int i=0;i<weeks;i++){
            total+=(28+(7*i));
        }
        weeks++;
        for(int i=0;i<days;i++){
            total+=weeks;
            weeks++;
        }
        return total;
    }
};