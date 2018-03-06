#include <iostream>

int a,b,c,x,y,i;

int es_primo(int a){
  c=1;
  for (i=2;i<a;i++){
   if(a%i==0){
     c=0;
   }
 }return c;
}

int main(void){
std::cout<<"Escoja el limite inferior \n";
std::cin>>x;
//Si se escoge 1 como limite inferior este tambien aparecera en la lista aunque no es un primo
std::cout<<"Escoja el limite superior \n";
std::cin>>y;
std::cout << "Los numeros primos entre " << x << " y "<< y <<" son:" "\n";
for (a=x;a<=y;a+=1){
    if(es_primo(a)!=0){
      std::cout<<a<<"\n";
    }
  }
}
