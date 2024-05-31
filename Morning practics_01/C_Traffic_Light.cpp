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
        int n; cin>>n;
    string x,s;
    cin>>x>>s;
    s+=s;
    int cnt=0,ans=0;
    bool flag=false;
        if(x[0]=='g')
        {
            cout<<0<<"\n";
            continue;
        }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='g')
        {
            ans=max(cnt,ans);
            flag=false;
        }
        else if(s[i]==x[0] && flag==false)
        {
            flag=true;
            cnt=0;
        }
        if(flag) cnt++;
    }
    cout<<ans<<"\n";
    }
    return 0;
}