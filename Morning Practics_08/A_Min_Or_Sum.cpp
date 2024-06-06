#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    int OR=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        OR|=a[i];
    }
    cout<<OR<<nl;

   } 
    return 0;
}