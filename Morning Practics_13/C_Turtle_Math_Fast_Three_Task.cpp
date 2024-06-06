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
   int t; 
   cin>>t;
   while(t--)
   {
    int n; cin>>n;
    int sum=0;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3==0)
    {
        cout<<0<<nl;
        // continue;
    }
    else{
        if(sum%3==2)
        {
            cout<<1<<nl;
        }
        else{
            bool f=false;
            for(int val:a)
            {
                if(val%3==1)
                {
                    f=true;
                    break;
                }
            }
            if(f) cout<<1<<nl;
            else cout<<2<<nl;
        }
    }
   } 
    return 0;
}