- How to check if all int in a number is same.
```cpp
void solve() {
  int n;
  cin >> n;
  int res = 0;
  for (ll pw = 1; pw <= n; pw = pw * 10 + 1) {
    for (int d = 1; d <= 9;  d++) {
      if (pw * d <= n) {
        res++;
      }
    }
  }
  cout << res << endl;
}
```