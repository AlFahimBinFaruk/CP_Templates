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
    for (int i = 1; i <= n; i++)
    {
        b = b * i;
    }
    b = b * b;

    bigint d = 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        d = d * i;
    }
    bigint ans = d / b;

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