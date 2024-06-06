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
    for(int i=1;i<=n;i++)
    {
        if(n<(1<<i))
        {
            cout<<(1<<(i-1))-1<<nl;;
            break;
        }
    }
    
   } 
    return 0;
}