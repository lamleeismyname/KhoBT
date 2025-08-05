#include <bits/stdc++.h>
#define ll long long
#define MAX_ARR 100005
#define MAX 10e17+1

ll n,m;
ll w[MAX_ARR],v[MAX_ARR];
ll f[101][MAX_ARR];

ll solve()
{
    for(ll i=1;i<=n;i++)
    {
        for(ll j=0;j<=m;j++)
            if(w[i]>j)
            {
                f[i][j]=f[i-1][j];
                //std::cout<<f[i][j]<<" ";
            }
            else
            {
                f[i][j]=std::max(f[i-1][j-w[i]]+v[i],f[i-1][j]);
                //std::cout<<f[i][j]<<" ";
            }
        //std::cout<<"\n";

    }
    return f[n][m];
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cin>>n>>m;
    for(ll i=1;i<=n;i++)
        std::cin>>w[i]>>v[i];
    for(ll i=0;i<=MAX_ARR;i++)
        f[0][i]=0;
    std::cout<<solve();
    return 0;
}
