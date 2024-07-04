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
    for(int i=0;i<n;i++)  cin>>a[i];
    sort(a.begin(),a.end());
    vi b;
    bool f=true;
    for(int i=1;i<n;i++){
        if(a[i]%a[0]!=0){
            b.pb(a[i]);
        }
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++){
        if(b[i]%b[0]!=0){
            f=false;
        }
    }
    if(f) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    solve();
   } 
    return 0;
}