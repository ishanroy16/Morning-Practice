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
   sort(a.begin(),a.end());
   int q; cin>>q;
   while(q--)
   {
    int x; cin>>x;
    
   auto it=upper_bound(a.begin(),a.end(),x);
   cout<<it-a.begin()<<nl; 
   }
    return 0;
}