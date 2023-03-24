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
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
		cout << "GDC of " << x << " " << y << " = " << GCD(x,y) << endl;
    }
    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/euclidean-algorithms-basic-and-extended/)
