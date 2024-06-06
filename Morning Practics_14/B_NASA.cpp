#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
vi all_pair;
void predefine()
{
    for(int i=0;i<(1<<15);i++)
    {

    string s=to_string(i);
    string s2=s;
    reverse(s2.begin(),s2.end());
    if(s==s2) all_pair.push_back(i);

    }
// for(int val:all_pair)
// {
//     cout<<val<<" ";
// }
}
int32_t main()
{
   ft;
   int t; cin>>t;
   predefine();
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int>x;
    int ans=0;
    for(int i=0;i<n;i++)
    {
       x[a[i]]++;
        for(int val:all_pair)
        {
            ans+=x[val^a[i]];
        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}