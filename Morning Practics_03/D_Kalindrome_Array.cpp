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
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int k,l;
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            f=false;
            k=a[i];
            l=a[n-1-i];
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<nl;
        // cout<<"2";
    }
    else{
        vi b,c;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=k)
            {
                b.push_back(a[i]);
                c.push_back(a[i]);
            }
        }
        reverse(c.begin(),c.end());
        if(b==c) cout<<"YES"<<nl;
        else 
        {
            vi d,e;
            for(int i=0;i<n;i++)
            {
                if(a[i]!=l)
                {
                    d.push_back(a[i]);
                    e.push_back(a[i]);
                }
            }
            reverse(d.begin(),d.end());
            if(d==e) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
    }
   } 
    return 0;
}