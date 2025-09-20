#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>

#define ll long long
int n,m;
int Gtime=0;
std::vector<std::vector<int>> G(10002,std::vector<int>());
std::vector<int> low(10002),num(10002,0);
int c_component=0;
std::vector<int> visit(10002,false);
std::stack<int> previsit;

int dfs(int x){
    previsit.push(x);
    Gtime++;
    num[x]=Gtime; low[x]=Gtime;
    for(int i=0;i<G[x].size();i++){
        if(visit[G[x][i]]==false){
            if(num[G[x][i]]==0){
                dfs(G[x][i]);
                low[x]=std::min(low[x],low[G[x][i]]);
            }
            else low[x]=std::min(low[x],num[G[x][i]]);
        }
    }
    if(num[x]==low[x]){
        c_component++;
        while(previsit.empty()!=true){
            visit[previsit.top()]=true;
            if(previsit.top()==x) break;
            previsit.pop();
        }
    }
    return 0;
}


int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v; std::cin>>u>>v;
        G[u].push_back(v);
        //G[v].push_back(u);
    }
    for(int i=1;i<=n;i++){
        if(num[i]==0)
            int dfsroot=dfs(i);
    }
    std::cout<<c_component;

}
