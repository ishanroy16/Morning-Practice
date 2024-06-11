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
    int n,k; cin>>n>>k;
    vi a(k);
    for(int i=0;i<k;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    int cost=0;
    int idx=-1;
    for(int i=0;i<k;i++)
    {
        cost+=n-a[i];
        idx=i;
        if(cost>=a[i+1]) break;
    }
    cout<<idx+1<<nl;
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