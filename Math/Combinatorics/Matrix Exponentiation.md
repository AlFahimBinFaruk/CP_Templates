### Matrix Exponentiation

- If we want to find nth fibonacci number in O(logn) Time then we will use this algo.

```c++
#include <bits/stdc++.h>
using namespace std;

void multiply(int a[3][3], int b[3][3])
{
    int mul[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            a[x][y] = mul[x][y];
        }
    }
}

int power(int F[3][3], int n)
{
    int M[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};

    if (n == 1)
    {
        return F[0][0] + F[0][1];
    }

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
    {
        multiply(F, M);
    }

    return F[0][0] + F[0][1];
}

// Time O(Logn)
// Space O(Logn)
int findNthFib(int n)
{
    int F[3][3] = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};

    if (n == 0)
    {
        return 0;
    }

    if (n == 1 || n == 2)
    {
        return 1;
    }

    return power(F, n - 2);
}

int main()
{
    cout << findNthFib(5);

    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/matrix-exponentiation/)
