class Solution {
    public boolean isPalindrome(int x) {
        String d = ""+x ;
        for(int i = 0 ; i < d.length()/2 ; i++ ){          
            if( d.charAt(i) != d.charAt( d.length() -i - 1 )){
                return false;
            }   
        }
        return true;
    }
}