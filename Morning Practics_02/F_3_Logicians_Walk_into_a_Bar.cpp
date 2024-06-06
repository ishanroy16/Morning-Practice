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
    string s; cin>>s;
    bool flag=true;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
            if(flag)
            {
                if(i<n-1)
                {
                    cout<<"IDK"<<nl;
                }
                else{
                   
                        cout<<"YES"<<nl;   
                }

            }
            else{
                cout<<"NO"<<nl;
            }
        }
        else{
            cout<<"NO"<<nl;
            flag=false;
        }
    }
   } 
    return 0;
}