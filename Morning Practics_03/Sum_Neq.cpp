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
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==4)
    {
        if(a[0]+a[1]==a[2]+a[3])
        {
            cout<<"NO"<<nl;
        }
        else cout<<"YES"<<nl;
    }
    else{
        int temp=a[0];
        bool f=true;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=temp)
            {
                f=false;
                break;
            }
        }
        if(f) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
   } 
    return 0;
}