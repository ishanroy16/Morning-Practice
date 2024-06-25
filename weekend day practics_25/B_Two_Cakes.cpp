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
   int n,a,b; cin>>n>>a>>b;
   int mn,mx=0;
   for(int i=1;i<=n-1;i++)
   {
    int x=a/i;
    int y=b/(n-i);
    mn=min(x,y);
    mx=max(mn,mx);
   } 
   cout<<mx<<nl;
    return 0;
}