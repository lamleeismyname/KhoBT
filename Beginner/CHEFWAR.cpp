#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll N,M,P;
ll a,b,ans;
int main(){
    freopen("CHEFWAR.INP","r",stdin);
    freopen("CHEFWAR.OUT","w",stdout);
    cin>>N>>M>>P;
    vector<vector<ll>> A(M+1);
    vector<bool> ck(M+1);

    for(ll i=1;i<=N;i++){
        cin>>a>>b;
        A[b].push_back(a);
    }
    while(true){
        if(A[P].size()!=0){
            if(!ck[P]){
                ck[P]=1;
                P=A[P][0];
                ans++;
            }
            else{
                ans=-1;
                break;
            }
        }
        else{
            break;
        }
    }
    cout<<ans;
}
