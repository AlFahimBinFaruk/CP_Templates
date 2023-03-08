### Seive of Eratosthenes.

- The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.

```c++
#include <bits/stdc++.h>
using namespace std;

// Time O(n Log Log n)
// space O(n)
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    // set all default value of prime to true
    memset(prime, true, sizeof(prime));

    // run the algo.
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    // print primes
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == true)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n = 30;
    cout << "prime numbers of " << n << endl;
    SieveOfEratosthenes(n);

    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)
