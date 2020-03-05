#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double a,r;
  int j;

  double total;
  a=1.0;
  r=0.5;
  total=0;

  for(j=0;j<=10;j++)
    {
      total=total+a*pow(r,j);
    }
  cout<<"total="<<total<<endl;
}
