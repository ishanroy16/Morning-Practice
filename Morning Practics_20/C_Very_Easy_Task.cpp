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
   int n,x,y; cin>>n>>x>>y;
  int mn=min(x,y);
   auto ok=[&](int m)
   {
    if(mn>m) return false;
    int total=1;
    m-=mn;
    total+=m/x;
    total+=m/y;
    if(total>=n) return true;
    return false;
   };
   int l=0,r=1e10;
   int ans=0;
   while(l<=r)
   {
    int mid=(l+r)/2;
    if(ok(mid)){
        ans=mid;
        r=mid-1;
    }
    else l=mid+1;
   } 
   cout<<ans<<nl;
    return 0;
}