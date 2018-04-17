#include <iostream>
#include <cmath>

using fptr = double(double);

double funcion(double x);
double simpson (double a, double b, int n, fptr func);

int main(){
  std::cout.precision(16);
  std::cout << simpson (0.000001,1,40,funcion) <<"\n";
  return 0;
}

double funcion (double x){
  return 1/sqrt(x);
}

double simpson (double a, double b, int n, fptr func){
  double h = (b-a)/n;
  double sum = func(a)+func(b);
  for(int i=1;i<=n/2-1;++i){
    double x=a+2*i*h;
    sum+=2*func(x);
  }
  for(int i=1;i<=n/2;++i){
    double x=a+(2*i-1)*h;
    sum+=4*func(x);
  }
  return h*sum/3;
}
