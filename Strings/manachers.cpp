// O(2N)=> O(N)
int manacher_algo(string &s){

    int n=s.size();
    int P[n];
    memset(P,0,sizeof(P));
    
    int C=0,R=0;
    int mx=0;

    

    for(int i=1;i<s.size()-1;i++){
        int mirr=(2*C)-i;

        if(i<R){
            P[i]=min(R-i,P[mirr]);
        }

        while(s[i+(1+P[i])]==s[i-(1+P[i])]){
            P[i]++;
        }

        if((i+P[i])>R){
            C=i;
            R=i+P[i];
        }

        mx=max(mx,P[i]);
    }

    return mx;
}
signed main(){
    fastio();
    
    string s="aaaa";
    string nw="$";
    for(int i=0;i<s.size();i++){
        nw+="#";
        nw+=s[i];
    }
    nw+="#";
    nw+="@";

    


    print(manacher_algo(nw));

}
