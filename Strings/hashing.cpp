/*
                                Bismillahir Rahmanir Raheem.
*/


#include <bits/stdc++.h>
using namespace std;



#define nl "\n"
#define print(x) cout<<x<<nl
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#ifndef ONLINE_JUDGE
#include "../debug.h"
#else
#define debug(x)
#endif


/*--------------------------------------------------------
                                    Code starts from here.
--------------------------------------------------------------------------------------*/


/*  
Hashing algo starts here...
*/
const int N = 1e6 + 9;

int power(long long n, long long k, const int mod) {
  int ans = 1 % mod;
  n %= mod;
  if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void prec() {
    pw[0] =  {1, 1};
    for (int i = 1; i < N; i++) {
      pw[i].first = 1LL * pw[i - 1].first * p1 % MOD1;
      pw[i].second = 1LL * pw[i - 1].second * p2 % MOD2;
    }
    ip1 = power(p1, MOD1 - 2, MOD1);
    ip2 = power(p2, MOD2 - 2, MOD2);
    ipw[0] =  {1, 1};
    for (int i = 1; i < N; i++) {
      ipw[i].first = 1LL * ipw[i - 1].first * ip1 % MOD1;
      ipw[i].second = 1LL * ipw[i - 1].second * ip2 % MOD2;
    }

}
struct Hashing {
    int n;
    string s; // 0 - indexed
    vector<pair<int, int>> hs; // 1 - indexed
    Hashing() {}
    Hashing(string _s) {
        n = _s.size();
        s = _s;
        hs.emplace_back(0, 0);
        for (int i = 0; i < n; i++) {
            pair<int, int> p;
            p.first = (hs[i].first + 1LL * pw[i].first * s[i] % MOD1) % MOD1;
            p.second = (hs[i].second + 1LL * pw[i].second * s[i] % MOD2) % MOD2;
            hs.push_back(p);
        }
    }
    pair<int, int> get_hash(int l, int r) { // 1 - indexed
        assert(1 <= l && l <= r && r <= n);
        pair<int, int> ans;
        ans.first = (hs[r].first - hs[l - 1].first + MOD1) * 1LL * ipw[l - 1].first % MOD1;
        ans.second = (hs[r].second - hs[l - 1].second + MOD2) * 1LL * ipw[l - 1].second % MOD2;
        return ans;
    }
    pair<int, int> get_hash() {
        return get_hash(1, n);
    }
};


/*  
Hashing algo end here...
*/



signed main(){
    fastio();
    prec();
    
    string s;cin>>s;
    int n=s.size();
    int l=1,r=n;
    // this will give us the hash of whole string
    Hashing h = Hashing(s);
    while(l<n){
        // now we can retrive the hash of specific substring.
        pair<int,int>one=h.get_hash(1,l);
        pair<int,int>two=h.get_hash(r,n);

        if(one==two){
            cout<<l<<" ";
        }
        l++,r--;
    }

    // debug(Hashing(s).get_hash(1,3));

    
    
}
