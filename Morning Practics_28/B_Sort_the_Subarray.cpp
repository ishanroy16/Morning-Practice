#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void subarray(int l,int r,vector<int>&a,vector<int>&b)
{
    vi c,d;
    int ans=0;
    while(r<a.size()){
        c.pb(a[r]);
        d.pb(b[r]);
        sort(c.begin(),c.end()); 
        // sort(d.begin(),d.end()); 
        if(c==d)
        {
            ans=r;
    
        }
        r++;
    }
    cout<<l+1<<" "<<ans+1<<nl;
}
void solve(){
    int n; cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int l=1,r=n;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            l=i,r=i;
            subarray(l,r,a,b);
            break;
        }
    }
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