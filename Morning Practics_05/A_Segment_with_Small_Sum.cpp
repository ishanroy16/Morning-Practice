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
    ll sum=0;
    int l=0,r=0,ans=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum<=s)
        {
            ans=max(ans,(r-l+1));
        }
        else {
            sum-=a[l];
            l++;
        }
        r++;
    }
    cout<<ans<<nl;
    return 0;
}