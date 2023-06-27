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
}```