### Modular arithmetic.
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
void solve(){
    int a=6,b=3,c=5;
    print((a/b)%c);
    print((a%c)/(b%c));
    print((a*modInverse(b,c))%c);
    // int num=10;
    // printT("MI",modInverse(num,mod));
    // print((modInverse(num,mod)*num)%mod);
}```
- [gfg](https://www.geeksforgeeks.org/modular-arithmetic/)
