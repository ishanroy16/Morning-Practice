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
   while(t--)
   {
    int n; cin>>n;
   string s; cin>>s;
   int change=0,pr=0;
   for(int i=0;i<n/2;i++) 
   {
    if(s[i]==s[n-i-1])
    {
        pr+=2;
    }
    else{
        change++;
    }
   }
   string ans="";
   for(int i=0;i<=n;i++)
   {
    int total=i;
    total-=change;
    if(total<0)
    {
        ans+='0';
    }
    else{
        total=max((total%2),total-pr);
        total=max(1ll*0,total-(n%2));
        if(total==0) ans+='1';
        else ans+='0';
    }
   }
    cout<<ans<<nl;
   
   }
    return 0;
}