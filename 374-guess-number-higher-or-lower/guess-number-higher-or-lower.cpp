/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start =1 , end = n;
        while(start<=end){
            int no = start+(end-start)/2;
            int res = guess(no);
            if(res==-1){
                end = no-1 ;
            }
            else if(res==1){
                start = no+1;
            }
            else{
                return no;
            }
        }
        return 0;
    }
};