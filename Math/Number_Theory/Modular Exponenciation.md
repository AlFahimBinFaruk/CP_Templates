### Modular Exponenciation.

- Given three numbers x, y and p, if we want to compute (x^y) % p , we will use this algo.

```c++
#include <bits/stdc++.h>
using namespace std;

// Time O(logY)
// Space O(1)
int power(long long x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;

    if (x == 0)
    {
        return 0;
    }

    while (y > 0)
    {
        if (y & 1)
        {
            res = (res * x) % p;
        }
        y = y >> 1; // y = y / 2
        x = (x * x) % p;
    }

    return res;
}

int main()
{
    cout << "Result of 2^5 % 13 : " << power(2, 5, 13);
    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/)
