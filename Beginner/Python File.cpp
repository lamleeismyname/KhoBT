#include <iostream>


#define ll long long
int main()
{
    std::string n;
    std::cin>>n;
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='.')
            if(n[i+1]=='p' or n[i+1]=='P' and n[i+2]=='y' or n[i+2]=='Y')
        {
            std::cout<<"yes";
        }
        else std::cout<<"no";

    }
}
