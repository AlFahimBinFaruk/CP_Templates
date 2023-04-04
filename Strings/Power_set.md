### How to arrange a subsequence of given string in Dictionary order.
```cpp
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    vector<string> res;
		    int n=s.size();
		    for(int i=0;i<(1<<n);i++){
		        string t="";
		        for(int j=0;j<n;j++){
		            if(i & (1<<j)){
		                t+=s[j];
		            }
		        }
		        if(t.size()){
		            res.push_back(t);
		        }
		    }
		    sort(res.begin(),res.end());
		    return res;
		}
};
```
