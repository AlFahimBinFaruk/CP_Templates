### Binary/Modular exponenciation.
- suppose you want to calculate a^b you can't use traditional pow() in this case. so we will use BE which will calculate it in O(longN) time.
- https://cp-algorithms.com/algebra/binary-exp.html
```cpp
const int mod=1e9+7;
int binpow(int a, int b,int p=mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%p;
        a = (a * a)%p;
        b >>= 1;
    }
    return res;
}
```
