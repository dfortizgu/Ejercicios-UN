#include <iostream>
int main(void){

int var1, var2;

while (var1!=0 | var2!=0) {

  //(var1!=0 | var2!=0) el | siginifica "o", es decir mietras se cumpla una condicion o la otra se repetira el ciclo

  std::cout<<"Ingrese dos valores enteros diferentes, para terminar ingrese 0 en ambas entradas.\n";
    //Se debe ingresar 0 en ambas entradas para cumplir la condicion del ciclo while

  std::cin>>var1;
  std::cin>>var2;

  if (var1<var2) {
    std::cout<< var1<<" es menor que "<< var2 <<"\n";
  } else {
    if (var1==var2) {
      std::cout<< var1<<" es igual a "<< var2 <<"\n";
    } else {
      std::cout<< var1<<" es mayor que "<< var2 <<"\n";
    }
  }

}
return 0;

}
