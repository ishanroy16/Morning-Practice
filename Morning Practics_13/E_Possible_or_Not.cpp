#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    int n,b; cin>>n>>b;
   int curr=-1;
    for(int i=0;i<n;i++) 
    {
        int x; cin>>x;
        if((x&b)==b)
        {
           curr&=x;
        }
    }
    // cout<<curr;
    if(curr==b) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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