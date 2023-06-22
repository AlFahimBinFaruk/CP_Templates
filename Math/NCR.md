### NCR
- Number of ways to choose r item from total N items where combinations doesen't matter.
```cpp
const int mod=1e9+7;
int binpow(int a, int b, int m=mod) {
    a %= m;
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int modInverse(int a,int p=mod){
    //p must be prime.
    return binpow(a,p-2,p);
}
int nCr(int n,int r,int p=mod){
    if(n<r)return 0;
    if(r==0)return 1;
    vector<int>fact(n+1,0);
    fact[0]=1;
    for(int i=1;i<=n;i++){
        fact[i]=fact[i-1]*i;
        fact[i]%=p;
    }
    // fact[n]/(fact[r]*fact[n-r]);
    return (fact[n]*modInverse(fact[r],p)%p*modInverse(fact[n-r],p)%p)%p;
}
```
