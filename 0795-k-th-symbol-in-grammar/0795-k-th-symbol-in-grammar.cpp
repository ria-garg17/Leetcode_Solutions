class Solution {
public:
    int kthGrammar(int n, int k) {
        int temp=0;
        while(n!=1){
            if(n%2==0){
                if(k > (1<<n-2)){ 
                 k=k-(1<<n-2);
                 ++temp;
                    }
           }else{
                if(k > (1<<n-2)) k=(1<<n-1)-k+1;
                }            
            n=n-1;

        }
        if(temp%2==0) return 0;
        else return 1;        
    }
    
};