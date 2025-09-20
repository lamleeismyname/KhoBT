#include <bits/stdc++.h>
#define ll long long

int n,sum=0;
std::priority_queue<int> heap;
std::vector<int> a(10002),b(10002);

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>n;
    for(int i=1;i<=n;i++){
        std::cin>>a[i]>>b[i];
        sum+=a[i];
        heap.push(a[i]-b[i]);
        if(i%2==1){
            sum-=heap.top();
            heap.pop();
        }
    }
    std::cout<<sum;
}
