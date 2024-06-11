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
    int n,q; cin>>n>>q;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    vi pre(n);
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    while(q--)
    {
        int x; cin>>x;
        if(x>pre[n-1]){
            cout<<-1<<nl;
            continue;
        }
        int l=0,r=n-1,idx=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(x<=pre[mid])
            {
                idx=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<idx+1<<nl;
    }
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