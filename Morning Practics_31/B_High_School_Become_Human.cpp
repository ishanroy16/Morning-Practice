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
   int x,y; cin>>x>>y;
   if(x==y){
    cout<<"="<<nl;
   }
   else{
   long double a=y*log(x);
   long double b=x*log(y);
//    cout<<a<<" "<<b<<nl;
   if(a>b) cout<<">"<<nl;
   else if(a<b) cout<<"<"<<nl;
   else cout<<"="<<nl;
   }
    return 0;
}