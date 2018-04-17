#include <iostream>
#include <array>

void repeticiones (const std::array<int,20> &arreglo);

int main(void){
  std::array <int,20> userNumbers;
  userNumbers={1,5,1,6,5,6,5,8,8,5,11,12,5,14,5,8,17,8,9,2};
  repeticiones(userNumbers);
  return 0;
}

void repeticiones (const std::array<int,20> &arreglo){
  //Cuenta cuantos numeros no repetidos hay
  //Para asignar el tamaño del nuevo arreglo
  int norep = 0;
  for (int j = 0; j < 20; ++j) {
    int b = arreglo[j];
    int sum = 0;
    for(int i = 0; i < 20; ++i){
      if(b==arreglo[i]){
        sum+=1;
      }
    }
    if(sum==1)norep+=1;
  }

  //Introduce los valores no repetidos en el nuevo arreglo
  int singleNumbers[norep];
  int pos=-1;
  for (int j = 0; j < 20; j++) {
    int b = arreglo[j];
    int sum = 0;
    for(int i = 0; i < 20; i++){
      if(b==arreglo[i]){
        sum+=1;
      }
    }

    if(sum==1){
      pos+=1;
      singleNumbers[pos]=arreglo[j];
    }
  }

  //Imprimir numeros del arreglos
  std::cout<<"Los numeros no repetidos son: \n";

  for(int i = 0; i<norep; i++){
    std::cout << singleNumbers[i]<<"\n";
  }
}
