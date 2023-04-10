### Sieve of Eratosthenes.

- The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.

```cpp
const int maxn=1e6;
int primes[maxn];
 
void sieve(){
    fill(primes,primes+maxn,1);
    for(int i=2;i<maxn;i++){
        if(primes[i]==0) continue;
        for(int j=i+i;j<maxn;j+=i){
            primes[j]=0;
        }
    }
}
```

- [GFG](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)
