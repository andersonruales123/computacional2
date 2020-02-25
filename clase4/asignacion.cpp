#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

  int num1=2;
  int num2=2;
  //cout<<"Ingresa el primer numero=";
  //cin>>num1;
  //cout<<"INgresa numero2=";
  //cin>>num2;

  if(num1==num2){
    cout<<"son iguales"<<endl;
  }

  cout<<6<<endl
      <<18<<endl
      <<124<<endl
      <<"----\n"
      <<(6+8+12)<<endl;
  cout<<setw(3)<<6<<endl
      <<setw(3)<<18<<endl
      <<setw(3)<<124<<endl
      <<"-----\n"
      <<(6+8+120)<<endl;
  cout<<"|"<<setw(3)<<fixed<<setprecision(3)<<25.67<<"|"<<endl;


  const float PI=3.1416;
  float angulo,arg,s,c;
  
  cout<<"Ingrese el angulo en grados=";
  cin>>angulo;
  arg=angulo*PI/180;
  s=sin(arg);
  c=cos(arg);
  cout<<"El sin es="<<s<<endl;
  cout<<"El cos es="<<c<<endl;
    
}
