### Modular multiplicative inverse.
* if we have some thing like (P/Q)%MOD then directly moding them won't work. For division related Operation like in case of Q we have to separatety mod them with ModInverse the MOD the result
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
- [gfg](https://www.geeksforgeeks.org/modular-arithmetic/)
