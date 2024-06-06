#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
string binary(int n)
{
    string s1="";
    for(int i=32;i>=0;i--)
    {
        if(n&(1<<i))  s1+='1';
     
       else s1+='0';
    }
    // reverse(s1.begin(),s1.end());
    return s1;
}
string binary2(int n)
{
    string s2="";
    for(int i=32;i>=0;i--)
    {
        if(n&(1<<i))  s2+='1';
        else s2+='0';
    }
    // reverse(s2.begin(),s2.end());
    return s2;
}
int32_t main()
{
   ft;
   int n,m,k; cin>>n>>m>>k;
   vi a(m+1);
   for(int i=0;i<m+1;i++) cin>>a[i];
  string s1= binary(a[0]);
//   cout<<s1;
  int ans=0;
   for(int i=1;i<m+1;i++)
   {
       string s2= binary2(a[i]);
       int cnt=0;
       cout<<s1<<nl;
       cout<<s2<<nl;
       cout<<nl;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            cnt++;
        }
        if(cnt<=k) ans++;
   } 
//    cout<<ans<<nl;
    return 0;
}