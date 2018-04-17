#include <iostream>
#include <cmath>
#include <random>

int main(void){
  std::cout.precision(16);
  std::cout.setf(std::ios::scientific);
  std::mt19937 genx(0);
  std::mt19937 geny(10);
  std::uniform_real_distribution <> dis(-1,1);

  int circ = 0;
  int square = 10000000;

  for(int i = 0; i<=square; i++){
    std::cout<< i*100.0/square<< "\n";
    double x = dis(genx);
    double y = dis(geny);
    //std::cout << x << "\t" << y << "\n";

    if(x*x+y*y<=1){
      circ+=1;
    }
  }
  std::cout << 4.0*circ/square;
  return 0;
}
