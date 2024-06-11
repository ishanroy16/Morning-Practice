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
   int n,k; cin>>n>>k;
   int ar[n];
   for(int i=0;i<n;i++)
   {
    cin>>ar[i];
   } 
//    sort(ar,ar+n);
   while(k--)
   {
    int x; cin>>x;
    int l=0,r=n-1;
    bool f=false;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ar[mid]>x)
        {
            r=mid-1;
        }
        else if(ar[mid]<x)
        {
            l=mid+1;
        }
        else{
            f=true;
            break;
        }
    }
    if(f) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
   }
    return 0;
}