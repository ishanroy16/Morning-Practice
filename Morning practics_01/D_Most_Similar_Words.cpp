#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
             cin>>v[i];

        }
        int mn=INT_MAX;
      
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int result=0;
               for(int k=0;k<v[i].size();k++)
               {
                result+=abs(v[i][k]-v[j][k]);
               }
               mn=min(result,mn);
            }
        }
        cout<<mn<<"\n";
       
       
    }
    return 0;
}