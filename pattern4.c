/*
    For N=5 ->
        1
        22
        333
        4444
        55555 
*/
class Solution {
    public void pattern4(int n) {
        for (int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                System.out.printf("%d",i);
        }
        System.out.println("");
        }
    }
}
