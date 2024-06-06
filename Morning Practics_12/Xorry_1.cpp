#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    int x; cin>>x;
    int b=0,a=0;
    int pos=0;
    while((1<<pos)<=x)
    {
        pos++;
    }
     b=1<<pos-1;
    a=b^x;
    cout<<a<<" "<<b<<nl;

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