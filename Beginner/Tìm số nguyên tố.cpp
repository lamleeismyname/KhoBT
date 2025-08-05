#include <iostream>
#include <math.h>

#define ll long long
int main()
{
    ll a,b;
    std::cin>>a>>b;
    bool arr[b+1];
    for(int i=0;i<=b;i++)
        arr[i]=true;
    for(int c0=2;c0*c0<=b;c0++)
    {
        if(arr[c0]==true)
        {
            for(int c1=c0*c0;c1<=b;c1+=c0)
                arr[c1]=false;
        }
    }
    arr[0,1]=false;
    for(int c2=a;c2<=b;c2++)
        if(arr[c2]==true) std::cout<<c2<<"\n";
}
