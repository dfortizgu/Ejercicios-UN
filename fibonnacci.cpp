#include <iostream>

int main(void){
  long long int a,b,x,i;
  a=0;
  b=1;
  std::cout<<"Ingrese la cantidad de numeros de la serie que desea\n";
  std::cin >> x;
  for(i=1;i<=x;i++){
    b=b+a;
    a=b-a;
    std::cout<<a<<"\n";
  }
  return 0;
}
