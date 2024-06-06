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
    int n,a,b; cin>>n>>a>>b;
    if(2*a<b)
    {
        cout<<n*a<<nl;
    }
    else{
        if(n%2==0)
        {
            cout<<(n/2)*b<<nl;
        }
        else{
            cout<<(n/2)*b+a<<nl;
        }
    }
   } 
    return 0;
}