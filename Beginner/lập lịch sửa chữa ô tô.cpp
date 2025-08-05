#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

#define int double
struct cap{
    int A;
    int B;
    int index;
};

int n;
std::vector<cap> arr(10002);

bool cmp(cap x,cap y){
    return x.A/x.B>y.A/y.B;
}

signed main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>n;
    for(int i=0;i<n;i++)
        std::cin>>arr[i].A;
    for(int i=0;i<n;i++){
        std::cin>>arr[i].B;
        arr[i].index=i+1;
    }
    std::sort(arr.begin(),arr.begin()+n,cmp);
    int ans=arr[0].A*arr[0].B;
    for(int i=1;i<n;i++){
        arr[i].B+=arr[i-1].B;
        ans+=arr[i].A*arr[i].B;
    }
    std::cout<<(long long)ans<<"\n";
    for(int i=0;i<n;i++)
        std::cout<<arr[i].index<<" ";
}
