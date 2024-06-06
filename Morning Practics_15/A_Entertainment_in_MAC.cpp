#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string temp=s;
    reverse(temp.begin(),temp.end());
    temp+=s;
    if(temp<s)
    {
        cout<<temp<<nl;
    }
    else{
        cout<<s<<nl;
    }
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}