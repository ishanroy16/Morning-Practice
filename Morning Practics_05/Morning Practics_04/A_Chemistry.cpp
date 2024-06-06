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
   int t;
   cin>>t;
   while(t--)
   {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    map<char,int>cnt;
    for(int i=0;i<n;i++)
    {
        cnt[s[i]]++;
    }
    int odd_cnt=0;
    for(auto it:cnt)
    {
        if(it.second%2!=0)
        {
            odd_cnt++;
        }
    }
    if(odd_cnt-1<=k)
    {
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
   } 
    return 0;
}