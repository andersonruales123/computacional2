#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
  int n1,val;
  char ch;

  while(val!=1){

    cout<<"Entre una letra=";
    cin>>ch;

    cout<<ch<<"\n"<<endl;

    cout<<"Desea entrar otras letras y número (SI=2, NO=1)=";
    cin>>val;
    cout<<val<<"\n"<<endl;
  }

}
