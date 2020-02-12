#include <bits/stdc++.h>

using namespace std;

void catAndMouse(long int x,long int y,long int z) 
{
   long int m,n;
    m=abs(z-x);
    n=abs(z-y);

    if(m>n)
     std::cout<<"Cat B"<<endl;
    else if(n>m)
      std::cout<<"Cat A"<<endl;
    else if(n==m)
      std::cout<<"Mouse C"<<endl;;   

}


int main()
{
    long int x,y,z,q;
    std::cin>>q;
  

    while(q!=0)
    {
        std::cin>>x;
        std::cin>>y;
        std::cin>>z;
        catAndMouse(x,y,z);
        q--;
    }
   return 0;
}
// Complete the catAndMouse function below.


