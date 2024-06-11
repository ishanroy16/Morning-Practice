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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
//    sort(a.begin(),a.end());
   vi pre(n);
   pre[0]=a[0];
   for(int i=1;i<n;i++)
   {
    pre[i]=pre[i-1]+a[i];
   } 
   int q; cin>>q;
   while(q--)
   {
    int x; cin>>x;
    auto it=lower_bound(pre.begin(),pre.end(),x)-pre.begin();
    cout<<it+1<<nl;
   }
    return 0;
}