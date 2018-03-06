#include <iostream>
#include <cmath>

int a,b,c,x,i;
double z;

/*Esta funcion determina la aproximacion de numeros primos
  dados por la formula de lagrange*/
double primos_L(int x){
  z=(x/(log(x)-1.08366));
  return z;
}

/*La funcion retorna 1 si el numero es primo o 0 si no lo
  es, se asume que el numero es primo y si se encuentra un
  numero que no lo es (a%i==0) se hace c=0*/
int es_primo(int a){
  c=1;
  for (i=2;i<a;i++){
   if(a%i==0){
     c=0;
   }
 }return c;
}

int main(void){
  std::cout.precision(16);
  b=0;
  std::cout << "Ingrese x" << '\n';
  std::cin >> x ;
  /*Esta seccion cuenta la cantidad de numeros primos iguales
    o menores que x, por cada numero primo agrega 1 a b, al
    final se pone en consola b*/
  for (a=2;a<=x;a+=1){
    if(es_primo(a)==1){
      b=b+1;
    }
  }
  std::cout << "El numero de primos menores o iguales a "<< x <<" son: " << b <<'\n';
  std::cout << "La formula de lagrange para los numeros primos dice que hay "<< primos_L(x) <<" primos antes de " << x << '\n';
}
