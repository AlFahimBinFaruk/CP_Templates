### Binomial Coefficients

- The binomial coefficient gives the number of ways we can choose a subset of k elements from a set of n elements.

```c++
#include <bits/stdc++.h>
using namespace std;

int binomialCoeff(int n,int k){
    if(k > n){
        return 0;
    }else if(k == 0 || k == n){
        return 1;
    }

    return (binomialCoeff(n-1,k-1) + binomialCoeff(n-1,k));
}

int main(){
    cout << "Binomial Coeff of 5,3 is : " << binomialCoeff(5,3);
    return 0;
}
```

- [GFG](https://www.geeksforgeeks.org/binomial-coefficient-dp-9/)
