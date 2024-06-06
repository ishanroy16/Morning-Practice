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
    int a,b,c; cin>>a>>b>>c;
    int ans=a;
    if(b/2>c)
    {
        cout<<"-1"<<nl;
        return;
    }
     if(b*b==c)
    {
        ans+=b;
    }
    cout<<ans<<nl;
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