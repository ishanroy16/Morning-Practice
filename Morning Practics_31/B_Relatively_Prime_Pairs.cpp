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
   int l,r; cin>>l>>r;
   int n=(r-l+1)/2;
   cout<<"YES"<<nl;
   for(int i=0;i<n;i++){
    cout<<l<<" "<<(l+1)<<nl;
    l+=2;
   }
    return 0;
}