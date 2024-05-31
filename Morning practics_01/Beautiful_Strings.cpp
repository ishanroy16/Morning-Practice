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
        ll n; cin>>n;
        string s; cin>>s;
        map<char,ll>cnt;
        for(ll i=0;i<n;i++)
        {
            cnt[s[i]]++;
        }
        ll ans=1;
        for(auto it:cnt)
        {
            ans*=(it.second+1);
            ans%=MOD;
        }
        cout<<(ans-1)<<"\n";
    }
    return 0;
}