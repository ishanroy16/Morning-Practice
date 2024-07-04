#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int lcm(int a,int b){
    return ((a/(__gcd(a,b)))*b);
}
int32_t main()
{
   ft;
    int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    int red=(n/a)*p;
    int blue=(n/b)*q;
    int ans=red+blue;
    int overlep=n/lcm(a,b);
    ans-=(overlep*(p+q));
    ans+=overlep*max(p,q);
    cout<<ans<<nl;
    return 0;
}