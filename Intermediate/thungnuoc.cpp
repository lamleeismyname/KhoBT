#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll P,a,b,c;
vector<ll> SIZE(10005,1);
vector<ll> PARENT(10005,0);
int Find_set(ll u){
    while(PARENT[u]!=u){
        ll temp=u;
        u=PARENT[u];
        PARENT[temp]=PARENT[u];
    }
    return u;
}
void add_set(ll u, ll v){
    u=Find_set(u);
    v=Find_set(v);
    if(u!=v){
        if(SIZE[u]<SIZE[v]) swap(u,v);
        PARENT[v]=u;
        SIZE[u]+=SIZE[v];
    }
}
bool UNION_SET(ll u,ll v){
    u= Find_set(u);
    v= Find_set(v);
    if(u==v) return 1;
    else return 0;
}
int main(){
    cin>>P;
    for(ll i=0;i<P;i++){
        cin>>a>>b>>c;
        if(PARENT[a]==0) PARENT[a]=a;
        if(PARENT[b]==0) PARENT[b]=b;
        if(c==1) add_set(a,b);
        else cout<< UNION_SET(a,b)<<endl;
    }
}
