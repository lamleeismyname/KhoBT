#include<bits/stdc++.h>
using namespace std;
using ll=long long;
stack<ll> stk;
ll step=0;
ll n,tmp;
int main(){
    freopen("XEPGACH.INP","r",stdin);
    freopen("XEPGACH.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    stk.push(0);
    for(ll i=0;i<n;i++){
        cin>>tmp;
        while(stk.top()>tmp) stk.pop();
        if(stk.top()==tmp) continue;
        else{
            stk.push(tmp);
            step++;
        }
    }
    cout<<step;
}
