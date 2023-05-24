int main(){
    vector<int>qrr(n+5);
    while(q--){
        int l,r;
        cin>>l>>r;
        qrr[l]++;
        qrr[r+1]--;
    }
    vector<pair<int,int>> pq;
    for(int i=1;i<=n;i++){
        qrr[i]+=qrr[i-1];
        // finding the priority of indexex;
        pq.push_back({qrr[i],i});
    }
    // sort from hightest to lower priority.
    sort(pq.rbegin(),pq.rend());
}
