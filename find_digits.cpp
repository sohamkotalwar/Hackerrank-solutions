#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t,n;
    std::cin>>t;

    for(int i=0;i<t;i++)
      {
          std::cin>>n;
            int number,x=0,count=0;
            number=n;
          while(number!=0)
            {
                x=number%10;
                if(n%x==0)
                  count++; 
                number=number/10;
            }
            std::cout<<count<<"\n";
      }
return 0;
}
