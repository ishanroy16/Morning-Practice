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
    int cnt_1=0,cnt_2=0;
    vector<char>a,b;
    for(int i=0;i<n;i++)
    {
        char ch; cin>>ch;
        a.push_back(ch);
    }
    for(int i=0;i<n;i++)
    {
        char ch; cin>>ch;
        b.push_back(ch);
    }
    // for(char ch:a)
    // {
    //     cout<<ch<<" ";
    // }
    bool f=true;
    for(int i=0;i<n;i++)
    {
        if((a[i]=='R' && b[i]!='R') || (b[i]=='R' && a[i]!='R'))
        {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES"<<"\n";
    else cout<<"NO"<<nl;
   } 
    return 0;
}