#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n,q; cin>>n>>q;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // sort(a.begin(),a.end());
        int ans=0;
        int pos=0;
        vi k(q);
        for(int i=0;i<q;i++) cin>>k[i];
        vector<pii>b;
        for(int i=0;i<q;i++)
        {
            b.pb({k[i],i});
        }
        sort(b.begin(),b.end());
        vector<pii>v;
    for(int j=0;j<q;j++)
    {
        
        for(int i=pos;i<n;i++)
        {
            if(a[i]<=b[j].first) ans+=a[i];
            else {
                pos=i;
                break;
            }
            if(i==n-1) pos=i+1;
        }
        // cout<<ans<<" ";
        v.pb({b[j].second,ans});
    }
    sort(v.begin(),v.end());
    for(auto [x,y]:v){
        cout<<y<<" ";
    }
    cout<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}