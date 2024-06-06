#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    ll n; cin>>n;
    string s; cin>>s;
    map<char,ll>cnt;
    for(ll i=0;i<s.size();i++)
    {
        cnt[s[i]]++;
    }
    ll ans=1;
    for(auto [x,y]:cnt)
    {
        ans*=y+1;
        ans%=MOD;
    }
    cout<<ans-1<<nl;
   } 
    return 0;
}