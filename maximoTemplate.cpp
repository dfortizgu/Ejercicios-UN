#include <iostream>
#include <cmath>

template <class type>
type max(type a, type b, type c);

int main(void){
  std::cout<<max(2,2,2)<<"\n";
  std::cout<<max(1.5,2.5,0.1)<<"\n";
  std::cout<<max(1.2f,0.2f,0.1f)<<"\n";
}

template <class type>
type max(type a, type b, type c){
  if(b>a){
    if(c>b){
      return c;
    }
    return b;
  }
  return a;
}
