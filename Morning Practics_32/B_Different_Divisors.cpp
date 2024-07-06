#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int n=100000;
vi a;
void prime(){
    vector<bool>prime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i+i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    
    for(int i=2;i<=n;i++){
        if(prime[i]){
            a.pb(i);
        }
    }
}
int32_t main()
{
   ft;
   int t; cin>>t;
   prime();
   while(t--){
    int d; cin>>d;
    int ans=1,j=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]-1>=d){
            ans*=a[i];
            j=a[i];
            break;
        }
    }
    for(int i=0;i<a.size();i++){
        if(a[i]-j>=d){
            ans*=a[i];
            j=a[i];
            break;
        }
    }
    cout<<ans<<nl;
   } 
    return 0;
}