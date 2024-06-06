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
    int x; cin>>x;
    int cnt=0;
    while(1<<cnt<=x)
    {
        cnt++;
    }
    cnt--;
    int ans=1;
    bool f=false;
    for(int i=cnt-1;i>=0;i--)
    {
        if(x&(1<<i))
        {
            f=true;
        }
        else{
            if(f) ans*=2;
        }
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