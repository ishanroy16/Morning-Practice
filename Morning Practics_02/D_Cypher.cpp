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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int m; cin>>m;
        string s; cin>>s;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='U') 
            {
                a[i]--;
                if(a[i]==-1)
                {
                    a[i]=9;
                }
            }
            else 
            {
                a[i]++;
                if(a[i]==10)
                {
                    a[i]=0;
                }
            }
        }
    }
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<nl;
   } 
    return 0;
}