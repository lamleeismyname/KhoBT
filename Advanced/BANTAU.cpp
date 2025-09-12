#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> dp_cur(600),dp_bef(600);
vector<ll> prs(600),a(600);
vector<vector<ll>> st(10,vector<ll> (600));
ll n,g,tmp;
void adding(ll n){
    for(ll i=1;i<=n;i++){
        st[0][i]=a[i];
    }
    for(ll i=1;(1<<i)<=n;i++){
        for(ll j=1;j<=n-(1LL<<i)+1;j++){
            st[i][j]=max(st[i-1][j],st[i-1][j+(1LL<<(i-1))]);
        }
    }
}
ll query(ll u,ll v){
    ll k=__lg(v-u+1);
    return max(st[k][u],st[k][v-(1LL<<k)+1]);
}
ll C(ll u,ll v){
    ll mx = query(u,v);
    return (v-u+1)*mx - (prs[v]-prs[u-1]);
}

int main(){
    cin>>n>>g;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        prs[i]=prs[i-1]+a[i];
    }
    adding(n);
    for(ll i=1;i<=n;i++){
        dp_bef[i]=C(1,i);
    }
    for(ll i=1;i<=g;++i){
        for(ll j=1;j<=n;j++){
            ll best=C(1,j);
            for(ll k=2;k<=j;k++){
                best=min(best,dp_bef[k-1]+C(k,j));
            }
            dp_cur[j]=best;
        }
        dp_bef=dp_cur;
    }
    cout<<dp_cur[n];
}
