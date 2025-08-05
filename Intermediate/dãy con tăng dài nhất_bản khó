#include <bits/stdc++.h>
using namespace std;
int main(){
multiset <int> mulse;
int n, a, m;
cin>>n;
for(int i = 1; i <= n; i++) {
    cin>>a;
    mulse.insert(a);
    auto m=mulse.lower_bound(a);
    m++;
    if (m!=mulse.end()) 
        mulse.erase(m);
}
cout<<mulse.size();
    return 0;
}
