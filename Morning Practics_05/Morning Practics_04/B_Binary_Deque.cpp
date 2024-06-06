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
   int t ; cin>>t;
   while(t--)
   {
    int n,s; cin>>n>>s;
    vi a(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    // cout<<sum;
    if(sum==s)
    {
        cout<<0<<nl;
    }
    else if(sum<s)
    {
        cout<<-1<<nl;
    }
    else{
        
       int l=0,r=0,cnt=0,ans=0;
       while(r<n)
       {
        ans+=a[r];
        if(ans==s)
        {
            cnt=max(cnt,r-l+1);
            r++;
        }
        else if(ans>s)
        {
            ans-=a[l];
            l++;
        }
        else
        r++;
       }
       cout<<l<<" "<<r;
    //    cout<<cnt<<nl;
    }
   } 
    return 0;
}