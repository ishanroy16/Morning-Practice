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
    int a,b; cin>>a>>b;
    if(b==1) {
        cout<<"NO"<<nl;
        continue;
    }
    cout<<"YES"<<nl;
    cout<<a<<" "<<a*b<<" "<<a*(b+1)<<nl;
   } 
    return 0;
}