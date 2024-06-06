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
    int n,k; cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0,r=0;
    int cnt=0,ans=0,h=0;
    while(r<n)
    {
        if(a[r]%2==1) cnt++;
        h++;
        if(h==k)
        {
            if(cnt>0)
            ans++;

            h--;
            if(a[l]%2==1) 
            {
                cnt--;
               
            }
            l++;
        }
        
        r++;
    }
    cout<<ans<<"\n";
   } 
    return 0;
}