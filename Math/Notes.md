## Notes.

1. Odd number cannot be divided by even numbers.
2. odd+odd=even.
3. Smallest divisor of every number is a prime.
4. In NCR the order does not matter.
5. [Nth root of number with Binary search](https://www.youtube.com/watch?v=5snE6xsyheE)
6. Median of an arr/string.

```cpp
int m=n/2+1;
```

7. Find out how many item within a range.

```cpp
int c=lastIn-firstIn+1;
```

8. If the last digit of any number is even then the whole number is even.
9. Lexicographical order(dictionary order) of number means any possible order will be valid.
10. Find out min operation to obtain a certail GCD if we know a,b.

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
 
11. If you want to append some number of zeros after an integer simply multiply the integer by 10^(number of zeros)
12. decimal multiplication technique.
```cpp
// int n=x*2.5 - dont give correct ans.
int n=(x/2)*5 // right way.
```
13. If you always want to get number from 0-9
```cpp
int r=(num+1+10)%10;
```
14. How many subarray you can create from an array?
```cpp
int subarrays=(n*(n+1))/2;
```
15. Use of n*(n-1)/2
- Counting the number of ways to choose two items from a set of n items.
  - If there are 4 people in a room, there are 6 ways to choose two of them to go out for coffee.
- Calculating the number of possible paths between two points on a grid.
  - If there are 5 houses on a street, there are 10 possible paths between any two houses.
- Finding the total number of edges in a complete graph with n vertices.
  - If there are 6 vertices in a complete graph, there are 15 edges.
16. Use of !N.
- Calculating the number of possible combinations of n items, where order matters.
  - If there are 7 items, there are 7! = 5040 possible combinations of these items, where order matters.
- Finding the total number of possible permutations of n items.
  - If there are 8 items, there are 8! = 40320 possible permutations of these items.
17. Number of way to choose subset from an Array is 2^n.
18. subarray and subsq are same but subarrys have to be contigious while subseq don't.
```txt
[1,2,3,4,5,6]
1.subarray=[1,2,3],[2,3,4];
2.subseq=[1,2,4],[4,6];
```

13. ![Formula 1](/Images/1.png)

14. ![Fromula 2](/Images/2.png)

15. ![Formula 3](/Images/3.png)

16. (a * b) % M=((a%M) * (b % M)) % M.

17. (a+b)%M=((a%M)+(b%M))%M.

18. (a-b)%M=((a%M)-(b%M)+M)%M.

19. (a/b)%M=((a%M) * mod_inverse(b,M))%M.

20. There always exists a power of 2 in the range [x,2x] for any positive integer x.
21. In case of I'th and I+k th index I%K==(I+K)%K.
