- Dynamic Programming C++ implementation
of LIS problem
```cpp
#include <bits/stdc++.h>
using namespace std;

int lis(int arr[], int n)
{
	int lis[n];

	lis[0] = 1;

	for (int i = 1; i < n; i++)
	{
		lis[i] = 1;
		for (int j = 0; j < i; j++)
			if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
				lis[i] = lis[j] + 1;
	}
	return *max_element(lis, lis + n);
}

int main()
{
	int arr[] = {6, 2, 5, 1, 7, 4, 8, 5};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Length of lis is = %d\n", lis(arr, n));

	return 0;
}
```
- [GFG](https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/)