#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

int m,n;
std::vector<std::vector<int>> a(102,std::vector<int>(102,-1000000));

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            std::cin>>a[i][j];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[j][i]+=std::max({a[j][i-1],a[j-1][i-1],a[j+1][i-1]});
            //std::cout<<a[j][i]<<" ";
        }
        //std::cout<<"\n";
    }
    int ans=-10000002;
    for(int i=1;i<=m;i++)
        ans=std::max(ans,a[i][n]);
    std::cout<<ans;
}
