#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
 int a[500][500];
 int bisopMove(int x,int y,int n,int m)
 {
    ll res=0;
    int indx=0;
    while(x-indx>-1 and y-indx>-1){
        res+=a[x-indx][y-indx];
        indx++;
    }
    indx=0;
    while(x-indx>-1 and y+indx<m){
        res+=a[x-indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n and y+indx<m){
        res+=a[x+indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n and y-indx>-1){
        res+=a[x+indx][y-indx];
        indx++;
    }
    return res-3*a[x][y];
 }
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n,m; cin>>n>>m;
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans=max(ans,bisopMove(i,j,n,m));
        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}