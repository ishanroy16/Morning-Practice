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
    int n,k,p1,p2;
    cin>>n>>k>>p1>>p2;
    int p[n];
    int a[n];
    for(int i=1;i<=n;i++) cin>>p[i];
    for(int i=1;i<=n;i++) cin>>a[i];
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        mp[p[i]]=a[p[i]];
    }
    map<int,int>mp2;
    for(int i=1;i<=n;i++)
    {
        mp2[a[i]]=i;
    }
    int bodha=0,sasha=0;
    while(k--)
    {
        bodha+=a[p1];
        sasha+=a[p2];
        if(mp[p1]>a[p1]) p1=mp2[mp[p1]];
        if(mp[p[p2]]>a[p2]) p2=mp2[mp[p2]];
    }
    cout<<bodha<<" "<<sasha<<nl;
   } 
    return 0;
}