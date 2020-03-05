#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;

int main()
{
  srand(time(NULL));
  for(int j=0;j<=10;j++)
    {
      cout<<(1+rand()%(51))<<endl;
    }

  return 0;
}
