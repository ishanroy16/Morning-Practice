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
    int a,b,l;
    cin>>a>>b>>l;
    vi v;
    for(int i=1;i*i<=l;i++)
    {
        if(l%i==0)
        {
            v.pb(i);
            if(i*i!=l)
            v.pb(l/i);
        }
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
   } 
    return 0;
}