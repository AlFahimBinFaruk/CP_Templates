### Prime Factorization
- Then, the following function factors constructs a vector that contains the prime factorization of n
```c++
#include <bits/stdc++.h>
using namespace std;

vector<long long> fectorize(long long n)
{
	vector<long long> factorization;
	for (long long d = 2; d * d <= n; d++)
	{
		while (n % d == 0)
		{
			factorization.push_back(d);
			n /= d;
		}
	}
	if (n > 1)
		factorization.push_back(n);
	return factorization;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		vector<long long> prime_factors = fectorize(n);
		for (auto i : prime_factors)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}
```