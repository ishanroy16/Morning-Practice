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
    int n,m; cin>>n>>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int diff=0;
            // cout<<s[i]<<" "<<s[j]<<nl;
            for(int k=0;k<m;k++)
            {
                 diff+=abs(s[i][k]-s[j][k]);
            }
            ans=min(ans,diff);
        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}