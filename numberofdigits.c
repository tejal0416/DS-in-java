//You are given an integer n. You need to return the number of digits in the number.
class Solution {
    public int countDigit(int n) {
        if(n==0){
            return 1;
        }
        int count =0;
        while(n%10 !=0){
            n=n/10;
            count ++;
        }
        return count;
    }
}
