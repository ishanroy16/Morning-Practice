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
   ll n,s; cin>>n>>s;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   ll l=0,r=0,sum=0,ans=0;
   while(r<n)
   {
    sum+=a[r];
    while(sum>=s)
    {
        ans+=(n-r);
        sum-=a[l];
        l++;
    }
    r++;
   } 
   cout<<ans<<nl;
    return 0;
}