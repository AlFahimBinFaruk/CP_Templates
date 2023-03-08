### Eculids Algo Extended.

- If you are given something like ax + by = c where a,b,c is defined and you need you find the value of x,y then you will use GCD extended.

```c++
#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a,int b,int* x,int* y){
    if(a==0){
        *x = 0;
        *y = 1;
        return b;
    }

    // to store reccursion value
    int x1,y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);

    // update x,y
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main()
{
    cout << "Solution of 39x+15y = 12";
    int x,y;

    int gcd = gcdExtended(39,15,&x,&y);
    cout << "GCD of 39,15 : " << gcd << endl;

    x = (12/gcd) * x;
    y = (12/gcd) * y;
    cout << "Solution x,y : " << x << " " << y << endl;

    return 0;
}
```
