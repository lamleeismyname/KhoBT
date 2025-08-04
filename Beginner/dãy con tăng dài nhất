#include <iostream>
#include <math.h>

#define ll long long
int main()
{
    ll n;
    std::cin>>n;
    ll a[n];
    ll b[n];
    ll temp=1;
    for(ll i=0;i<n;i++)
    {
        std::cin>>a[i];
        b[i]=1;
    }
    for(ll c0=0;c0<n;c0++)
    {
        ll max=0;
        if(c0>0)
        {
            for(ll c1=0;c1<c0;c1++)
            {
                if(a[c0]>a[c1])
                {
                    if(max<b[c1])
                    {
                        max=b[c1];
                    }
                }

            }

        }
        b[c0]=(max+1);
        if(b[c0]>temp) temp=b[c0];
    }
    std::cout<<temp;
}
