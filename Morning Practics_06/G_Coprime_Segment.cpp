#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<ll>
int main()
{
   ft;
   ll n;
   cin>>n;
   vi a(n);
   for(ll i=0;i<n;i++)
   {
    cin>>a[i];
   }
  ll l=0,r=0;
   ll ans=INT_MAX;
   bool flag=false;
   while(r<n)
   {
    ll currentGcd=a[r];
    for(ll j=r;j>=l;j--)
    {
        currentGcd=__gcd(currentGcd,a[j]);
        if(currentGcd==1)
        {
            flag=true;
            ans=min(ans,r-j+1);
            break;
        }
    }

    r++;
   }
   if(flag)
   cout<<ans<<nl;
   else cout<<-1<<nl;
    return 0;
}