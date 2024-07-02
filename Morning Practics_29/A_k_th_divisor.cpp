#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int>v;
int32_t main()
{
    int n; cin>>n;
    int k; cin>>k;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i*i!=n)
            v.push_back(n/i);
        }
        // cout<<"\n";
    }
    sort(v.begin(),v.end());
    if(v.size()>=k)
        cout<<v[k-1]<<"\n";
        else cout<<-1<<"\n";
    
    // for(int i:v) cout<<i<<" ";
    return 0;
}