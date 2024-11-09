### Modular multiplicative inverse.
* If we have Addition or Multiplication Operation we can directly MOD them.
* If we have some thing like (P/Q)%MOD then directly moding them won't work. For division related Operation like in case of Q we have to separatety mod them with ModInverse the MOD the result
```cpp
const long long mod=1e9+7;
long long binpow(long long a, long long b, long long m=mod) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long modInverse(long long a,long long p=mod){
    //p must be prime.
    return binpow(a,p-2,p);
}

```
### Example
```cpp
const long long mod=1e9+7;
long long binpow(long long a, long long b, long long m=mod) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long modInverse(long long a,long long p=mod){
    //p must be prime.
    return binpow(a,p-2,p);
}

int main(){
    fastio();
    long long mod=998244353;
    long long n;cin>>n;
    vector<long long>arr(n),brr(n);

    for(long long i=0;i<n;i++){
        cin>>arr[i];
        arr[i]%=mod;
    }

    for(long long i=0;i<n;i++){
        cin>>brr[i];
        brr[i]%=mod;
    }
    long long sum=0;

    for(long long i=0;i<n;i++){
        sum+=arr[i]+brr[i];
        sum%=mod;
    }
    
    for(long long i=1;i<=n;i++){
        long long tt=sum*i;
        tt%=mod;
        long long q=modInverse(2*n,mod);
        q%=mod;
        tt*=q;
        tt%=mod;

        print(tt);
        
    }
    

    return 0;
    
}
```
- [gfg](https://www.geeksforgeeks.org/modular-arithmetic/)
