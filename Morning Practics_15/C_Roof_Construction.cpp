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
    int k=0;
    int x=n;
    while(1<<(k+1)<=n-1) k++;
    
    for(int i=(1<<k)-1;i>=0;i--)
    {
        cout<<i<<" ";
    }
    for(int i=(1<<k);i<n;i++)
    {
        cout<<i<<" ";
    }
    cout<<nl;
   } 
    return 0;
}