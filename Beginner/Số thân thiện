#include <iostream>
#include <math.h>
#define ll long long

int main()
{
    ll a,b;
    ll dem=0;
    std::cin>>a>>b;
    for(ll i=a;i<=b;i++)
    {
        ll swap_i=0;
        ll temp=i;
        while(temp/10!=0)
        {
            swap_i+=temp%10;
            temp/=10;
            if(temp/10==0)
            {
                swap_i*=10;
                swap_i+=temp%10;
                goto t;
            }
            swap_i*=10;
            t:;
        }
        ll gcdA=i;
        ll gcdB=swap_i;
        ll tempgcd;
        while(gcdB!=0)
        {
            tempgcd=gcdB;
            gcdB=gcdA%gcdB;
            gcdA=tempgcd;

        }
        if(gcdA==1) dem++;
        //std::cout<<swap_i<<" ";
    }
    std::cout<<dem;
}
