### Catalan number
```c++
#include <bits/stdc++.h>
using namespace std;
#define bigint long long int

/*
Time Complexity: O(n)
Auxiliary Space: O(1)
*/
bigint findCatalan(int n)
{
    bigint b = 1;

    // calculating n!
    for (int i = 1; i <= n; i++)
    {
        b = b * i;
    }

    // calculating n! * n!
    b = b * b;

    bigint d = 1;

    // calculating (2n)!
    for (int i = 1; i <= 2 * n; i++)
    {
        d = d * i;
    }

    // calculating (2n)! / (n! * n!)
    bigint ans = d / b;

    // calculating (2n)! / ((n! * n!) * (n+1))
    ans = ans / (n + 1);
    return ans;
}

// Driver Code
int main()
{
    int n = 5;
    cout << findCatalan(n);
}
```
- [Usage](https://www.youtube.com/watch?v=2NZF2UKyh0g);
- [GFG](https://www.geeksforgeeks.org/program-nth-catalan-number/)