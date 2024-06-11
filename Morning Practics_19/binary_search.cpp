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
    vi a(10);
    for(int i=0;i<10;i++)
    {
        a[i]=i*i+10;
    }
    for(int val:a) cout<<val<<" ";
    int l=0,r=a.size()-1;
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]>=40)
        {
            ans=r;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<nl;
    return 0;
}