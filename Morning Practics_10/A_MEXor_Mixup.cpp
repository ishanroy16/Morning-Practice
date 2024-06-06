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
   vi v;
   v.pb(0);
    for(int i=1;i<3e5;i++)
    {
        v.pb(v[i-1]^i);
    }
    // for(int val:v)
    // {
    //     cout<<val<<" ";
    // }
   while(t--)
   {
    int a,b; cin>>a>>b;
    int x=v[a-1];
    if((x==b)) cout<<a<<nl;
    else if(((x^b)!=a)) cout<<a+1<<nl;
    else if((x^b)==a) cout<<a+2<<nl;
   } 
    return 0;
}