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
   int n,k; cin>>n>>k;
   vi a(n);
   map<int,int>mp;
   for(int i=0;i<n;i++) 
   {
    cin>>a[i];
    // mp[a[i]]++;
   }
    int cnt=0;
    int l=0,r=0,ans=0;
    while(r<n)
    {
        mp[a[r]]++;
        if(mp[a[r]]==1)
        {
            cnt++;
        }
        while(cnt>k)
        {
            mp[a[l]]--;
            if(mp[a[l]]==0)
            {
                cnt--;
            }
            l++;
            
        }
        ans+=r-l+1;
        r++;
    }
        // cout<<l<<" "<<r<<nl;
    cout<<ans<<nl;
    return 0;
}