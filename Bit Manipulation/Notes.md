### Bit manipulation.
1. check if a number(x) is power of 2.
```cpp
//way 1.
if(!(x&(x-1)))) YES;
else NO;
//way 2
if(__builtin_popcount(x)==1)YES;
else NO;
```
2. set kth bit
```cpp
x|(1<<k)
```
3. Unset kth bit
```cpp
x&(~(1<<k))
```
4. Toggle kth bit
```cpp
x^(1<<k)
```
5. Check if kth bit is set or not.
```cpp
(x&(1<<k))==1<<k:YES
```
6. x*(2^k) = x << k
7. x/(2^k) = x >> k
8. Find out x%2^k
```cpp
x&((1<<k)-1)
```
9. Swapping two vars
```cpp
x=x^y;
y=x^y;
x=x^y;
```
10. Toggle x
```cpp
if(x==a)x=b
else if(x==b)x=a;
----
x=a^b^x
```
11. Compute the biggest power of 2 that is a divisor of x. Example: f(12) = 4
```cpp
1<<__builtin_ctz(x)
```
12. Compute the smallest power of 2 that is not smaller than x. Example: f(12) = 16
```cpp
1 << (32 - __builtin_clz (x - 1))
```











