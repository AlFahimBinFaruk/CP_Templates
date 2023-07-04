### Binary Search
1. Taking l=0/-1 is same.
2. If you take r=n you won't cover last index.r+1 will cover last index.
3. Use Epsilon if you want value after decimal point to also be correct.
```
1e-(number of point after decimal you want correct+1);
```