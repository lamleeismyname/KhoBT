#include <iostream>
#define ll long long
#define str string

int main()
{
    ll dem(0);
    std::str s;
    std::cin>>s;
    for(ll c0=0;c0<s.length();c0++)
    {
        if(s[c0]==32)
            goto t;
        for(ll c1=c0+1;c1<s.length();c1++)
        {
            if(s[c0]==s[c1])
            {
                s[c1]=32;
            }
        }
        t:;
    }
    for(ll c2=0;c2<s.length();c2++)
    {
        if(s[c2]!=32) dem++;
    }
    if(dem%2==0) std::cout<<"CHAT WITH HER!";
    else std::cout<<"IGNORE HIM!";

}
