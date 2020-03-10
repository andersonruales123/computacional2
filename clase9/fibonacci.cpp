
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int numero,fibo1,fibo2,i;
   numero=4;
   fibo1=1;
   fibo2=1;
   for(i=1;i<=numero;i++)
   {
     //cout << fibo2 << "\n";
       fibo2 = fibo1 + fibo2;
       fibo1 = fibo2 - fibo1;
       cout<<fibo2<<"\n";
   }

}
