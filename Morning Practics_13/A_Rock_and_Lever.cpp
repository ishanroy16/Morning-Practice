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
    int n; cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        int cnt=0;
        while(x>1)
        {
            cnt++;
            x/=2;
        }
        mp[cnt]++;
        // mp[__lg(x)]++;
       
    }
    int ans=0;
    for(auto [x,y]:mp)
    {
        if(y>1)
        {
           
         ans+=(y*(y-1))/2;
        }
    }
    cout<<ans;
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