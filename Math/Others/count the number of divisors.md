```cpp
const int N=1e5+5;
vector<int>divisors[N];
//N(log(N))
void counter(){
    for(int i=2;i<N;i++){
        for(int j=i;j<N;j+=i){
            divisors[j].push_back(i);
        }
    }
}
void solve(){
    counter();
    for(int i=2;i<=10;i++){
        for(auto it:divisors[i]){
            cout<<it<<" ";
        }
        cout<<nl;
    }
}```