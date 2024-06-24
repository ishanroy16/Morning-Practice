#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    auto ok=[&] (int mid)
    {
        int l=0,r=0,cnt=1;
        // for(int r=0;r<n;r++)
        // {
        //     if((a[r]-a[l])>(2*mid))
        //     {
        //         cnt++;
        //         l=r;
        //     }
        // }
        while(r<n)
        {
            if((a[r]-a[l])>(2*mid)){
                cnt++;
                l=r;
            }
            else{
                r++;
            }
        }
        return cnt<=3;
    };
    int l=0,r=1e9,mid,ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<nl;
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