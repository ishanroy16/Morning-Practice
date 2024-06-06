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
    string c,s;
    cin>>c>>s;
    s+=s;
    bool flag=false;
    int cnt=0;
    int ans=0;
        if(c[0]=='g')
        {
            cout<<"0"<<nl;
            continue;
        }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='g')
        {
            flag=false;
            ans=max(ans,cnt);
        }
        else if(s[i]==c[0] && flag==false)
        {
            flag=true;
            cnt=0;
        }
        if(flag) cnt++;
    }
    cout<<ans<<nl;
   } 
    return 0;
}