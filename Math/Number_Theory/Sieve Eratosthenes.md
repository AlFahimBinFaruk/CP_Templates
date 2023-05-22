### Sieve of Eratosthenes.

- The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so.

```cpp
const ll mxn=(ll)1e7+5;
ll primes[mxn];
vector<ll>arr;
void sieve(){
    mem(primes,-1);
    for(ll i=2;i<=mxn;i++){
        if(primes[i]==-1){
            arr.push_back(i);
            if(arr.size()>((1e5)+5)) break;
            for(ll j=i*i;j<=mxn;j+=i){
                primes[j]=i;
            }
        }
    }
}
```

- [GFG](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)
