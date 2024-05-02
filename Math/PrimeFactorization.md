### Prime Factorization

- Finding all divisors of N.
  
```cpp
vector<int> allFactors(int x){
    vector<int>res;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            res.push_back(i);
            if(x/i!=i){
                res.push_back(x/i);
            }
        }
    }
    return res;
}
```

- Finding all the divisors of N that are prime.
  
```cpp
//Sqrt(N);
vector<long long> trial_division1(long long n) {
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

//if n==1e18+3
//runtime is 999999999
```

```cpp
//wheel factorization
vector<long long> trial_division2(long long n) {
    vector<long long> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}


//if n==1e18+3
//runtime is 500000000
```

```cpp
const ll N=(ll)1e7+10;
vector<ll>primes(N,1);
vector<ll>lp(N,0),hp(N,0);
void seive(){
    primes[0]=primes[1]=0;
    for(ll i=2;i<N;i++){
        if(primes[i]==1){
            lp[i]=hp[i]=i;
            for(ll j=i*i;j<N;j+=i){
                primes[j]=0;
                if(lp[j]==0)lp[j]=i;
                hp[j]=i;
            }
        }
    }
}
void solve(){
    int n;cin>>n;
    unordered_map<int,int>factors;
	//Log(N)
    while(n>1){
        int prime_factor=hp[n];
        while(n%prime_factor==0){
            n/=prime_factor;
            factors[prime_factor]++;
        }
    }
    for(auto it:factors){
        cout<<it.first<<" = "<<it.second<<nl;
    }
}
```
