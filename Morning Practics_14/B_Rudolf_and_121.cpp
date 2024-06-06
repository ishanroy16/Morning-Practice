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
    vi a(n);
    for(int i=0;i<n;i++ ) cin>>a[i];
    // for(int val:a)
    // {
    //     cout<<val<<" ";
    // }
   
    for(int i=0;i<n-2;i++)
    {
      if(a[i]<0){
        cout<<"NO"<<nl;
        return;
      }
      int op=a[i];
      a[i]-=op;
      a[i+1]-=2*op;
      a[i+2]-=op;
    }
   for(int val:a)
   {
    if(val!=0)
    {
        cout<<"NO"<<nl;
        return;
    }
   }
   cout<<"YES"<<nl;
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