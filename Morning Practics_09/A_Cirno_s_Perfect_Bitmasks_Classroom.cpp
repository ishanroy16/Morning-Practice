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
    bitset<32>a(n);
    bitset<32>b(0);
    for(int i=0;i<31;i++)
    {
        if(a[i]==1)
        {
            b[i]=1;
            break;
        }
    }
    if((a^b)==0)
    {
        for(int i=0;i<31;i++)
        {
            if(a[i]==0 && b[i]==0)
            {
                b[i]=1;
                break;
            }
        }
    }
    int ans=b.to_ulong();
    cout<<ans<<nl; 
   } 
    return 0;
}