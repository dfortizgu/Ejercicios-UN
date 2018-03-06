#include <iostream>
#include <cmath>

int a,b,c,x,i;
double z,l;

double primos_L(int x){
  z=(x/(log(x)-1.08366));
  return z;
}

int es_primo(int a){
  c=1;
  for (i=2;i<a;i++){
   if(a%i==0){
     c=0;
   }
 }return c;
}

int main(void){
  b=0;
  std::cout << "Ingrese x" << '\n';
  std::cin >> x ;
  for (a=2;a<=x;a+=1){
    if(es_primo(a)!=0){
      b=b+1;
    }
  }
  std::cout << "El numero de primos menores o iguales a "<< x <<" son:" << '\n';
  std::cout << b << '\n';
  std::cout << "La formula de lagrange para los numeros primos dice que hay "<< primos_L(x) <<" antes de " << x << '\n';
}
