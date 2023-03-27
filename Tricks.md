## Tricks.

1. Median of an arr/string.

```cpp
int m=n/2+1;
```

2. Find out how many item within a range.

```cpp
int c=lastIn-firstIn+1;
```

3. If the last digit of any number is even then the whole number is even.
4. Lexicographical order(dictionary order) of number means any possible order will be valid.
5. Find out min operation to obtain a certail GCD if we know a,b.

```cpp
int m=min(a%gcd,gcd-a%gcd);
```
<details>
<summary>Proof</summary>
Without loss of generality, assume a>b
 otherwise we can swap a
 and b
. We know that GCD(a,b)=GCD(a−b,b)
. Notice that no matter how many times we apply any operation, the value of a−b
 does not change. We can arbitrarily change the value of b
 to a multiple of a−b
 by applying the operations. In this way, we can achieve a GCD
 equal to a−b
. Now, since GCD(x,y)≤min(x,y)
 for any positive x
 and y
, GCD(a−b,b)
 can never exceed a−b
. So, we cannot achieve a higher GCD by any means.
To achieve the required GCD
, we need to make b
a multiple of g=a−b
using as few operations as possible. There are two ways to do so −
decrease b
to the largest multiple of g
less than or equal to b
or increase b
to the smallest multiple of g
greater than b
. The number of operations required to do so are bmodg
and g−bmodg
respectively. We will obviously choose the minimum of the two. Also notice that amodg=bmodg
since a=b+g
. So, it doesn't matter if we use either a
or b
to determine the minimum number of operations.
 </details>
 
 6. If you want to append some number of zeros after an integer simply multiply the integer by 10^(number of zeros)
