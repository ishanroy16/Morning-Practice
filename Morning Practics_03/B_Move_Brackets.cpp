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
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        char ch; cin>>ch;
        if(ch=='(') cnt++;
        else {
            if(cnt>0) cnt--;
        }
    }
    cout<<cnt<<nl;
   } 
    return 0;
}