#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
  float largo=10;
  float ancho=15;
  float profundidad_promedio=5.5;

  float slya,mlya,perimetro,volumen, area_superficie;

  mlya=largo*ancho;
  slya=largo+ancho;
  
  perimetro=2*(slya);
  volumen=mlya*profundidad_promedio;
  area_superficie=2*slya*profundidad_promedio+mlya;
  cout<<"multipĺicacion="<<mlya<<endl;
  cout<<"suma="<<slya<<endl;
  cout<<"perimeto="<<perimetro<<endl;
  cout<<"volumen="<<volumen<<endl;
  cout<<"area_superficie="<<area_superficie<<endl;


  cout<<"Largo"<<" | "
      <<"Ancho"<<" | "
      <<"Profundidad"<<" | "
      <<"Perímetro"<<" | "
      <<"Volumen"<<" | "
      <<"Área de la superficie subterranea"<<" | "
      <<endl;

  for(float p=5;p<=6.5;p=p+0.5){
    profundidad_promedio=p;
    largo=25;
    ancho=10;
    mlya=largo*ancho;
    slya=largo+ancho;
  
    perimetro=2*(slya);
    volumen=mlya*profundidad_promedio;
    area_superficie=2*slya*profundidad_promedio+mlya;
    cout<<largo<<"|"<<ancho<<"|"<<profundidad_promedio<<"|"<<perimetro<<"|"<<volumen<<"|"<<area_superficie<<"|"<<endl;
    
  }
        for(float p=5;p<=6.5;p=p+0.5){
    profundidad_promedio=p;
    largo=30;
    ancho=12;
    mlya=largo*ancho;
    slya=largo+ancho;
  
    perimetro=2*(slya);
    volumen=mlya*profundidad_promedio;
    area_superficie=2*slya*profundidad_promedio+mlya;
    cout<<largo<<"|"<<ancho<<"|"<<profundidad_promedio<<"|"<<perimetro<<"|"<<volumen<<"|"<<area_superficie<<"|"<<endl;
    
  }

  
  cout<<"final"<<endl;

  return 0;

}
