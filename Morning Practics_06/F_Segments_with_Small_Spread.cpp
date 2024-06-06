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
   ll n,k; cin>>n>>k;
   vi a(n);
   multiset<ll>ml;
   for(ll i=0;i<n;i++) {
    cin>>a[i];
    
   }
   ll l=0,r=0;
   ll ans=0,cnt=0;
    while(r<n)
    {
        ml.insert(a[r]);
       ll mx=*ml.rbegin();
       ll mn=*ml.begin();
       if(mx-mn<=k)
       {
        ans+=r-l+1;
       }
       else{
        while(l<r)
        {
            mx=*ml.rbegin();
            mn=*ml.begin();
            if(mx-mn<=k)
            {
                break;
            }
            auto it=ml.find(a[l]);
            ml.erase(it);
            l++;
        }
        mn=*ml.begin(),mx=*ml.rbegin();
        if(mx-mn<=k) {
            ans+=r-l+1;
        }
       }
       r++;
    }
    cout<<ans<<"\n";

    return 0;
}