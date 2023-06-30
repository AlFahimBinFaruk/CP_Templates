### Euclids Algorithm.

- The Euclidean algorithm is a way to find the greatest common divisor(GCD) of two positive integers.

```c++
int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return GCD(b % a, a);
}
```

- [GFG](https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/)
