{
	"temp": {
		"prefix": "temp",
		"body": [
		  "#include <bits/stdc++.h>",
		  "using namespace std;",
		  "",
		  "/*** Typedefs ***/",
		  "typedef long long ll;",
		  "typedef long double lld;",
		  "typedef unsigned long long ull;",
		  "/*** end of Typedefs ***/",
		  "",
		  "/**** Helpers ***/",
		  "",
		  "/***********************************************************",
		  "************************/",
		  "#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)",
		  "#define mp make_pair",
		  "#define ff first",
		  "#define ss second",
		  "#define fr(i,n) for(int i=0; i<(n); i++)",
		  "#define all(x) (x).begin(), (x).end()",
		  "#define cSort(x) sort(all(x))",
		  "#define cReverse(x) reverse(all(x))",
		  "#define maxe(x) *max_element(all(x))",
		  "#define mine(x) *min_element(all(x))",
		  "#define takeArr(x) for(auto &i:x) cin >> i",
		  "#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));",
		  "#define toLower(x) transform(x.begin(), x.end(), x.begin(), ::tolower)",
		  "#define toUpper(x) transform(x.begin(), x.end(), x.begin(), ::toupper)",
		  "#define cFind(arr,x) find(all(arr),x)-arr.begin()",
		  "#define cCount(arr,x) count(all(arr),x)",
		  "#define mem(a , b) memset(a, b ,sizeof(a))",
		  "#define nl \"\\n\"",
		  "#define printT(x,y) cout << \"#For= \" << x << \" Value= \" << y << nl",
		  "#define print(x) cout << x << nl",
		  "#define printBinary(x) print(bitset<64>(x).to_string());",
		  "#define YES cout << \"Yes\" << nl",
		  "#define NO cout << \"No\" << nl",
		  "/***********************************************************",
		  "************************/",
		  "",
		  "int ceil(int x,int y){return (x+y-1)/y;}",
		  "int lcm(int a, int b){return (a / __gcd(a, b)) * b;}",
		  "/*** End of helpers ***/",
		  "",
		  "/*** Debug module ***/",
		  "#ifdef ONLINE_JUDGE",
		  "#define debug(x) cout << #x<<\" \"; _print(x); cout << nl;",
		  "#else",
		  "#define debug(x);",
		  "#endif",
		  "",
		  "void _print(ll t) {cout << t;}",
		  "void _print(int t) {cout << t;}",
		  "void _print(string t) {cout << t;}",
		  "void _print(char t) {cout << t;}",
		  "void _print(lld t) {cout << t;}",
		  "void _print(double t) {cout << t;}",
		  "void _print(ull t) {cout << t;}",
		  "",
		  "template <class T, class V> void _print(pair <T, V> p);",
		  "template <class T> void _print(vector <T> v);",
		  "template <class T> void _print(set <T> v);",
		  "template <class T, class V> void _print(map <T, V> v);",
		  "template <class T> void _print(multiset <T> v);",
		  "template <class T, class V> void _print(pair <T, V> p) {cout << \"{\"; _print(p.ff); cout << \",\"; _print(p.ss); cout << \"}\";}",
		  "template <class T> void _print(vector <T> v) {cout << \"[ \"; for (T i : v) {_print(i); cout << \" \";} cout << \"]\";}",
		  "template <class T> void _print(set <T> v) {cout << \"[ \"; for (T i : v) {_print(i); cout << \" \";} cout << \"]\";}",
		  "template <class T> void _print(multiset <T> v) {cout << \"[ \"; for (T i : v) {_print(i); cout << \" \";} cout << \"]\";}",
		  "template <class T, class V> void _print(map <T, V> v) {cout << \"[ \"; for (auto i : v) {_print(i); cout << \" \";} cout << \"]\";}",
		  "/** end of debug module **/",
		  "",
		  "void solve(){",
		  "    $0 ",
		  "}",
		  "",
		  "signed main(){",
		  "    fastio();",
		  "    int t=1;",
		  "    cin>>t;",
		  "    while(t--)solve();",
		  "    return 0;",
		  "}"
		],
		"description": "cp-temp"
	  },
	  "ncr": {
		"prefix": "ncr",
		"body": [
		  "int binpow(int a, int b, int m=mod) {",
		  "    a %= m;",
		  "    int res = 1;",
		  "    while (b > 0) {",
		  "        if (b & 1)",
		  "            res = res * a % m;",
		  "        a = a * a % m;",
		  "        b >>= 1;",
		  "    }",
		  "    return res;",
		  "}",
		  "int modInverse(int a,int p=mod){",
		  "    //p must be prime.",
		  "    return binpow(a,p-2,p);",
		  "}",
		  "int nCr(int n,int r,int p=mod){",
		  "    if(n<r)return 0;",
		  "    if(r==0)return 1;",
		  "    vector<int>fact(n+1,0);",
		  "    fact[0]=1;",
		  "    for(int i=1;i<=n;i++){",
		  "        fact[i]=fact[i-1]*i;",
		  "        fact[i]%=p;",
		  "    }",
		  "    // fact[n]/(fact[r]*fact[n-r]);",
		  "    return (fact[n]*modInverse(fact[r],p)%p*modInverse(fact[n-r],p)%p)%p;",
		  "}"
		],
		"description": "NCR"
	  },
	  "binpow": {
		"prefix": "binpow",
		"body": [
		  "int binpow(int a, int b,int p=mod) {",
		  "    int res = 1;",
		  "    while (b > 0) {",
		  "        if (b & 1)",
		  "            res = (res * a)%p;",
		  "        a = (a * a)%p;",
		  "        b >>= 1;",
		  "    }",
		  "    return res;",
		  "}"
		],
		"description": "binpow"
	  }

}
