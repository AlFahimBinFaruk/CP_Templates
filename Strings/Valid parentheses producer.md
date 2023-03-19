```cpp
void solve()
{
   int n;
   cin >> n;
   string right="";
   for(int i=0;i<n-1;i++) right.push_back(')');
   for(int i=0;i<n;i++){
        // left part.
        for(int a=0;a<i;a++) cout << '(';
        cout << "()";
        for(int b=0;b<(n-i-1);b++) cout << '(';
        // right part
        cout << right << "\n";
   }
}
```