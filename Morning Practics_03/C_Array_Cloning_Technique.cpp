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
   map<int,int>mp;
    int n; cin>>n;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        mp[x]++;
        mx=max(mx,mp[x]);
    }
    if(mx==n)
    {
        cout<<"0"<<nl;
        continue;
    }
        int cnt=0;
        int k=mx;
    while(k<n)
    {
        cnt+=min(k,n-k);
        if(k<n)
        {
            cnt++;
            k*=2;
        }
    }
    cout<<cnt<<"\n";
   } 
    return 0;
}