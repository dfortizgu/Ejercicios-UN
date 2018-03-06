#include <iostream>
int main(void){

  double milla, millaKm;

  std::cout << "Ingrese el numero en millas que desea convertir a kilometros, si desea terminar ingrese q\n";
  std::cin >> milla;
  millaKm = milla*1.609;
  std::cout <<milla <<" millas son "<< millaKm <<" kilometros\n";

  while (milla!=0) {
    std::cout << "Ingrese el numero en millas que desea convertir a kilometros, si desea terminar ingrese q\n";
    std::cin >> milla;
    millaKm = milla*1.609;
    std::cout <<milla <<" millas son "<< millaKm <<"kilometros\n";
  }

  return 0;

}
