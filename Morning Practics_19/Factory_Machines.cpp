#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>

int32_t main()
{
   ft;
   int n,t; cin>>n>>t;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   auto total=[&] (int m)
   {
    int total_cnt=0;
    for(int i=0;i<n;i++)
    {
        total_cnt+=m/a[i];
        if(total_cnt>=t)
        {
            return true;
        }
    }
    return false;
   };
   int l=1,r=1e18;
   int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(total(mid))
        {
            r=mid-1;
            ans=mid;
        }
        else {
            l=mid+1;
        }
    }
    cout<<ans<<nl;
    return 0;
}