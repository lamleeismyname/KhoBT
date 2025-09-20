#include <bits/stdc++.h>
#define ll long long
int n,m;
int bridge=0;
int cnt=0;
int timing=0;
const int MAX=100002;
std::vector<std::vector<int>> G(MAX,std::vector<int>());
std::vector<std::vector<int>> component;
std::set<int> joints;
std::vector<int> num(MAX,0),low(MAX,0);

int dfs(int x,int root){
    int child=0;
    component[cnt].push_back(x);
    timing++;
    num[x]=low[x]=timing;
    for(auto i=G[x].begin();i!=G[x].end();i++){
        if(*i!=root){
            if(num[*i]==0){
                dfs(*i,x);
                child++;
                low[x]=std::min(low[x],low[*i]);
                if(low[*i]==num[*i]) bridge++;
                if(x==root) continue;
                else if(num[x]<=low[*i]) joints.insert(x);
            }
            else low[x]=std::min(low[x],num[*i]);
        }
    }
    return child;
}

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v; std::cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(num[i]==0){
            component.push_back(std::vector<int>());
            if(dfs(i,i)>1) joints.insert(i);
            cnt++;
        }
    }
    std::cout<<joints.size()<<" "<<bridge;
}
