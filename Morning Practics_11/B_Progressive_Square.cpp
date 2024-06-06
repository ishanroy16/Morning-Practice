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
    int n,c,d;
    cin>>n>>c>>d;
    vi a(n*n);
    for(int i=0;i<n*n;i++)
    cin>>a[i];
    sort(a.begin(),a.end());
    
    int first=a[0];
    vi b(n*n);
    b[0]=first;
    for(int i=1;i<n*n;i++)
    {
        if((i)%n==0)
        {
          b[i]=b[i-n]+c;
        }
        else{
            b[i]=b[i-1]+d;
        }
    }
    sort(b.begin(),b.end());
    // for(int val:a)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<nl;
    // for(int val:b)
    // {
    //     cout<<val<<" ";
    // }
    if(a==b) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
   } 
    return 0;
}