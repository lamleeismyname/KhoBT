#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,p;
ll x,y,u,v;
int main(){
    cin>>n;
    vector<vector<ll>> a(n+1,vector<ll> (n+1));
    vector<vector<ll>> prs(n+1,vector<ll> (n+1,0));
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if((i%2)==(j%2)) prs[i][j]=prs[i-1][j]+prs[i][j-1]-prs[i-1][j-1]+a[i][j];
            else prs[i][j]=prs[i-1][j]+prs[i][j-1]-prs[i-1][j-1]-a[i][j];
        }
    }
    cin>>p;
    for(ll i=0;i<p;i++){
        cin>>x>>y>>u>>v;
        cout<<abs(prs[u][v]-prs[u][y-1]-prs[x-1][v]+prs[x-1][y-1])<<endl;
    }
}
