#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> dp_cur(600),dp_bef(600);
vector<ll> prs(600),a(600);
ll n,g,tmp;
ll C(ll u,ll v){
    ll mx = 0;
    for(ll i=u; i<=v; ++i){
        mx = max(mx, a[i]);
    }
    return (v-u+1)*mx - (prs[v]-prs[u-1]);
}
int main(){
    cin>>n>>g;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        prs[i]=prs[i-1]+a[i];
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
