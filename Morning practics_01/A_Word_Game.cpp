#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int cnt_a=0,cnt_b=0,cnt_c=0;
        vector<string>v(n*3);
        for(int i=0;i<n*3;i++)
        {
            cin>>v[i];
        }
        map<string,int>cnt;
        for(auto it:v)
        {
            cnt[it]++;
        }
        for(int i=0;i<n*3;i++)
        {
            if(i<n)
            {
                if(cnt[v[i]]==1) cnt_a+=3;
                else if(cnt[v[i]]==2) cnt_a+=1;
                else cnt_a+=0;
            }
            else if(i>=n && i<2*n)
            {
                if(cnt[v[i]]==1) cnt_b+=3;
                else if(cnt[v[i]]==2) cnt_b+=1;
                else cnt_b+=0;
            }
            else{
                if(cnt[v[i]]==1) cnt_c+=3;
                else if(cnt[v[i]]==2) cnt_c+=1;
                else cnt_c+=0;
            }
        }
        cout<<cnt_a<<" "<<cnt_b<<" "<<cnt_c<<"\n";
    }
    return 0;
}