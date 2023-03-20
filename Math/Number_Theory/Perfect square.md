- Check if a number is perfect square or not.
```cpp
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
```
- GFG.