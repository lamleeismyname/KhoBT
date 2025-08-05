#include <bits/stdc++.h>
#define ll long long
#define MAX_ARR 100005
#define MAX 10e17+1


void solve(ll n,ll a[]){
    std::stack<ll> sort;
    ll j=1;
    for(ll i=1;i<=n;i++){
        while(sort.empty()==false and sort.top()==j){
            j++; sort.pop();
        }
        if(a[i]==j) j++;
        else sort.push(a[i]);
    }
    while(sort.empty()==false and sort.top()==j){
            j++; sort.pop();
        }
    if(j>n) std::cout<<"yes"<<"\n";
    else std::cout<<"no"<<"\n";
}

int main()
{
    //std::ios_base::sync_with_stdio(0);
    //std::cin.tie(0);
    //std::cout.tie(0);
    while(true){
        ll n,zero;
        ll a[1005];
        std::cin>>n;
        if(n==0) return 0;
        for(ll i=1;i<=n;i++)
            std::cin>>a[i];
        //std::cin>>zero;
        solve(n,a);
        //if(solve(n,a)==true) std::cout<<"yes";
        //else std::cout<<"no";
    }

    return 0;
}
