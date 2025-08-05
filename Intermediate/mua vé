#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

#define ll long long

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    ll n;
    std::cin>>n;
    std::vector<ll> t(n+1),f(n+1);
    std::vector<ll> r(n);
    f[0]=0; t[0]=0; r[0]=0;
    for(ll i=1;i<=n;i++)
        std::cin>>t[i];
    for(ll i=1;i<n;i++)
        std::cin>>r[i];
    f[1]=t[1];
    for(ll i=2;i<=n;i++)
        f[i]=std::min(f[i-1]+t[i],f[i-2]+r[i-1]);
    std::cout<<f[n];
}
