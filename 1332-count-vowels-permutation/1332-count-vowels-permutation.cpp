class Solution {
public:
long long prevA = 1 , prevE=1, prevI=1 , prevO = 1 , prevU =1; 
long long  a , e, i, o, u; 
int mod = 1e9+7; 
    int countVowelPermutation(int n) {
        
        for( int j=2; j<=n; j++){
            
             a = (prevE + prevU + prevI)%mod;
             e = (prevA + prevI)%mod;
             i = (prevE +  prevO)%mod;
             o = (prevI)%mod;
             u = (prevI + prevO)%mod;
             prevA =a;   prevE =e;    prevI =i;   prevO =o;   prevU =u; 
        }

        return (prevA + prevE +prevI +prevO + prevU)%mod;
    }
};