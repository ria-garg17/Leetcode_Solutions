class Solution {
    public String longestPalindrome(String s) {
        int n = s.length();
        if(n<=1) return s;
        int st = 0, e = 0;
        int max_length = 1;

        for(int i = 0; i<n-1; i++){
            int l = i, r = i;
            while(l>=0 && r<n){
                if(s.charAt(l) == s.charAt(r)){
                    l--; r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > max_length){
                max_length = len;
                st = l+1;
                e = r-1;
            }
        }

        for(int i = 0; i<n-1; i++){
            int l = i, r = i+1;
            while(l>=0 && r<n){
                if(s.charAt(l) == s.charAt(r)){
                    l--; r++;
                }
                else
                    break;
            }
            int len = r-l-1;
            if(len > max_length){
                max_length = len;
                st = l+1;
                e = r-1;
            }
        }

        return s.substring(st,e+1);
    }
}