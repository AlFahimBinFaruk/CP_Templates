### Euclids Algorithm.

- The Euclidean algorithm is a way to find the greatest common divisor(GCD) of two positive integers.

```c++
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return GCD(b % a, a);
}

int main()
{
    cout << "GDC of 36,60 = " << GCD(36, 60) << endl;
    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/)
