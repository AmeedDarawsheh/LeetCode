class Solution {
    public String mergeAlternately(String word1, String word2) {
        
        String merged = "" ;
        int n1=word1.length();
        int n2=word2.length();
        int n3=0;
        if(n1>=n2)n3=n1;
        if(n1<n2)n3=n2;
        for(int i = 0 ; i < n3 ; i++){
                if(n1>i){
            char a = word1.charAt(i);
            merged +=a;
                }
                 if(n2>i){
            char b = word2.charAt(i);
            merged +=b;            
            }     
        }
        return merged;
    }
}