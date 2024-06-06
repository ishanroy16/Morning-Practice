#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    if(n%2==1)
    {
        for(int i=0;i<n;i++)
        {
            ans^=a[i];
        }
        cout<<ans<<nl;
    }
    else {
        for(int i=0;i<n;i++)
        {
            ans^=a[i];
        }
        if(ans==0) cout<<1<<"\n";
        else cout<<-1<<"\n";
    }
   } 
    return 0;
}