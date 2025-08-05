#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define ll long long
std::vector<bool> visit(2000007,false);
std::vector<int> tracer(2000007,-1);
std::queue<int> next;
int f,s,u,g,d;

int ud(){
    //int counter=0;
    while(next.empty()==false){
        int x=next.front();
        //if(x==g) return counter;
        next.pop();
        //visit[x]=true;
        if(x+u<=f && visit[x+u]==false){
            next.push(x+u);
            visit[x+u]=true;
            tracer[x+u]=x;
            //counter++;
        }
        if(x-d>0 && visit[x-d]==false){
            next.push(x-d);
            visit[x-d]=true;
            tracer[x-d]=x;
            //counter++;
        }
    }
    return 0;
}

int main(){
    std::cin>>f>>s>>g>>u>>d;
    next.push(s);
    visit[s]=true;
    ud();
    if(s==g) {std::cout<<"0"; return 0;}
    //for(int i=1;i<=f+2;i++)
        //std::cout<<i<<" "<<tracer[i]<<"\n";
    if(tracer[g]==-1) std::cout<<"use the stairs";
    else{
        int fi=g;
        int ans=0;
        while(tracer[fi]!=-1){
            //std::cout<<fi<<" ";
            fi=tracer[fi];
            ans++;
        }
        std::cout<<ans;
    }
}
