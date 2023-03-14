- Make a set of 0-31 Using a bit operation.
```cpp
void solve()
{
    int x = 0;
    x |= (1 << 1);
    x |= (1 << 3);
    x |= (1 << 4);
    x |= (1 << 8);
    x |= (1 << 0);
    x |= (1 << 23);
    // x |= (1 << 32); overflow.

    for (int i = 0; i < 32; i++)
    {
        if (x & (1 << i))
            cout << i << " ";
    }
}
```
- CP Handbook.