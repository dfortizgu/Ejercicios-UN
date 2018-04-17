#include <iostream>
#include <random>
#include <vector>

void matriz(void);

int main(void){
  matriz();
}


void matriz(void){
  int N = 6;
  double T = 360000;
  std::mt19937 gen(1);
  std::uniform_int_distribution<> dis(1,N);
  std::vector<int>valores={0};
  valores.resize(11);
  int a=0;
  int b=0;
  int c=0;
  for(int i=0; i<T; i++){
    a=dis(gen);
    b=dis(gen);
    c=a + b;
    valores[c-2]+=1;
  }

  for(int i=0;i<11;++i){
    std::cout<<valores[i]/T<<"   ";
  }


}
