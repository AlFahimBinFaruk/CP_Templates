- suppose you want to calculate a^b you can't use traditional pow() in this case. so we will use BE which will calculate it in O(longN) time.
- https://cp-algorithms.com/algebra/binary-exp.html
```cpp
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}```
