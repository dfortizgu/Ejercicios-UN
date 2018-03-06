#include <iostream>
int i;
int pow(int a, int b){
  int c=a;
  for(i=1;i<b;i++){
    c=c*a;
  }
  return c;
}

int main(void){
  int a,b;
  std::cout<<"Ingrese la base y la potencia en ese orden\n";
  std::cin >> a;
  std::cin >> b;
  std::cout<<pow(a,b);
}
