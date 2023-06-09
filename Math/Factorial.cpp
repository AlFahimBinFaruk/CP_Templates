const long long N=1e5+9;
const long long mod=1e9+7;
long long fact[N];
void solve(){
    int n;cin>>n;
    fact[0]=1;
    for(long long i=1;i<N;i++){
        fact[i]=fact[i-1]*i;
        fact[i]%=mod;
    }
    print(fact[n]);
}
