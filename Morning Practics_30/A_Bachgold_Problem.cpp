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
   int n; cin>>n;
   cout<<n/2<<nl;
   if(n%2==0){
    for(int i=0;i<n/2;i++){
        cout<<2<<" ";
    }
   } 
   else{
    for(int i=0;i<n/2-1;i++){
        cout<<2<<" ";
    }
    cout<<3<<" ";
   }
    return 0;
}