class Solution {
    public int[] getNoZeroIntegers(int n) {
        for(int i = 1 ; i < n ; i++){
            int b = n-i;
            if(isnozero(i) && isnozero(b)){
                return new int[]{i,b};
            }
        }
        return new int[]{};
    }
    private boolean isnozero(int n){
        while(n > 0){
            if(n % 10 == 0){
                return false;
            }
            n = n/10;
        }
        return true;
    }
}
