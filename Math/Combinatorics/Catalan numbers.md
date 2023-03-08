### Catalan number
```c++
#include <iostream>
using namespace std;

unsigned long int catalan(int n){
	if(n <= 1){
		return 1;
	}

	unsigned long int res = 0;
	for(int i=0; i<n; i++){
		res += (catalan(i) * catalan(n-i-1));
	}

	return res;
}

int main()
{
	cout << catalan(3);
	return 0;
}
```
- [Usage](https://www.youtube.com/watch?v=2NZF2UKyh0g);
- [GFG](https://www.geeksforgeeks.org/program-nth-catalan-number/)