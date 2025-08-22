#include <bits/stdc++.h> 

long long power(long long base, long long exp, long long mod){
    long long res = 1;
    base %= mod;

    while(exp>0){
        
        if(exp%2==1){
            res = (res*base) % mod;
        }

        base = (base*base)%mod;
        exp /=2 ; 
    }
    return res;
}

int main(){
    long long  s,m,n; 
    cin >> s; 
    cin >> m; 
    cin >> n;

    long long final_mod = 1e9+7; 
    long long intermediate = power(s,m,10);

    long long final_code = power(intermediate,n,final_mod);
    cout << final_code;
    return 0;

}