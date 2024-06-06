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
    map<string,bool>cnt;
    int n; cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        string s; cin>>s;
        cnt[s]=true;
        v[i]=s;
    }
   
    string ans="";
    for(int i=0;i<n;i++)
    {
        int f=0;
        for(int j=1;j<v[i].size();j++)
        {
            string x=v[i].substr(0,j), y=v[i].substr(j,v[i].size()-j);
            // cout<<x<<" "<<y<<nl;
            if(cnt[x]==true && cnt[y]==true)
            {
               f=1;
            }

        }
        cout<<f;
    }
    cout<<nl;
   } 
    return 0;
}