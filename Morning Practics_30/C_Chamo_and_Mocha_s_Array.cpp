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
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vi a(n),b;
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==2){
        sort(a.begin(),a.end());
        cout<<a[0]<<nl;
        continue;
    }
    int l=0,r=0;
    int maxi=INT_MIN;
    while(r<n){
        b.pb(a[r]);
        if(r-l+1==3){
            vi c(3);
            c=b;
            sort(c.begin(),c.end());
            maxi=max(maxi,c[1]);
            b.erase(b.begin()+0);
            l++;
        }
        r++;
    }
    cout<<maxi<<nl;
   } 
    return 0;
}