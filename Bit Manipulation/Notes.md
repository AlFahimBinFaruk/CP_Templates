```markdown
### Bit manipulation.

1. Check if a number (x) is a power of 2.

```cpp
// Way 1
if(!(x & (x - 1))) YES;
else NO;

// Way 2
if(__builtin_popcount(x) == 1) YES;
else NO;
```

2. `2^5 = 1 << 5;`

3. `x * 2 = x << 1;`

4. Set the kth bit.

```cpp
x | (1 << k)
```

5. Unset the kth bit.

```cpp
x & (~(1 << k))
```

6. Toggle the kth bit.

```cpp
x ^ (1 << k)
```

7. Check if the kth bit is set or not.

```cpp
(x & (1 << k)) == 1 << k ? YES : NO
```

8. `x * (2^k) = x << k`

9. `x / (2^k) = x >> k`

10. Find `x % (2^k)`.

```cpp
x & ((1 << k) - 1)
```

11. Swapping two variables.

```cpp
x = x ^ y;
y = x ^ y;
x = x ^ y;
```

12. Toggle `x` between two values `a` and `b`.

```cpp
x = a ^ b ^ x;
```

13. Compute the biggest power of 2 that is a divisor of `x`.

```cpp
1 << __builtin_ctz(x)
```

14. Compute the smallest power of 2 that is not smaller than `x`.

```cpp
1 << (32 - __builtin_clz(x - 1))
```

15. Unset all LSBs till index 3 of `x`.

```cpp
int i = 3;
x = x & (~(1 << (i + 1)) - 1);
```

16. Unset all MSBs of `x` till index 4.

```cpp
int i = 4;
x = x & ((1 << i) - 1);
```
```
