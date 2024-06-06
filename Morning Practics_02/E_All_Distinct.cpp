#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    map<int,int>cnt;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
        cnt[a[i]]++;
    }
    int ans=0;
    for(auto [x,y]:cnt)
    {
        if(y>1) ans+=(y-1);
        // cout<<x<<" "<<y<<"\n";
    }
    // cout<<ans;
    if(ans%2==0) cout<<n-(ans)<<nl;
    else cout<<(n-(ans+1))<<nl;
   } 
    return 0;
}