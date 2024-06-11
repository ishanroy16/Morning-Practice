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
   int n,q; cin>>n>>q;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   while(q--)
   {
   int idx=n,l=0,r=n-1;
    int x; cin>>x;
      while(l<=r)
     {
        int mid=(l+r)/2;
        if(x<=a[mid])
        {
            idx=mid;
           r=mid-1;
        }
        else l=mid+1;
     }
     cout<<idx+1<<nl;
   } 
    return 0;
}