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
   int t; cin>>t;
   while(t--)
   {
    int n,z; cin>>n>>z;
    vi a(n);
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,(z|a[i]));
    }
    cout<<mx<<nl;
   } 
    return 0;
}