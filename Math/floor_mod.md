1. -11%(1e9+7)=-11 but the ans is 999999996
so moding negative numbers dosen't work properly in cpp so, the solution is using floor mod
```cpp
int floorMod(int a, int n)
{
     
    // Type casting is necessary
    // as (int) / (int) will give
    // int result, i.e. -3 / 2
    // will give -1 and not -1.5
    int q = (int)floor((double)a / n);
 
    // Return the resultant remainder
    return a - n * q;
}
```
* https://www.geeksforgeeks.org/modulo-operations-in-programming-with-negative-results/
