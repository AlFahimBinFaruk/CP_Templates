#include <bits/stdc++.h>
using namespace std;
/***********************************************************
************************/
#define ll long long int
#define nl "\n"
#define printT(x,y) cout << "#For= " << x << " Value= " << y << nl
#define print(x) cout << x << nl
#define YES cout << "YES" << nl
#define NO cout << "NO" << nl
#define printArr(x) for(auto i:x) cout << i <<  " "
#define fr(i,n) for(int i=0; i<(n); i++)
#define sort(x) sort(x.begin(), x.end())
#define reverse(x) reverse(x.begin(), x.end())
#define maxe(x) *max_element(x.begin(),x.end())
#define mine(x) *min_element(x.begin(),x.end())
#define takeArr(x) for(auto &i:x) cin >> i
#define all(x) (x.begin(),x.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
// make sure to sort before applying unique // else only consecutive duplicates would be removed 
#define bitc(x,y)  bitset<y>(x)
/***********************************************************
************************/
int ceil(int x,int y)
{return (x+y-1)/y;}
long long lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
const int maxn=1e4+7;
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*-------------------------------------------------------------------------------------------------*/

void solve(){
    
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
