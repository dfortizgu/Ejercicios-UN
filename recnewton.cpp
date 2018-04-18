#include <iostream>
#include <cmath>

using fptr=double(double);

double funcion(double x);
double derivada(double x);
double newton(double xi, double eps, fptr func, fptr fdev);

int main(void){
  std::cout.precision(16);
  std::cout<< newton(2,1.0e-8,funcion,derivada);
}

double funcion(double x){
  return x*x-2;
}

double derivada(double x){
  return 2*x;
}

double newton(double xi, double eps, fptr func, fptr dev){
  xi=xi-func(xi)/dev(xi);
  if(std::fabs(func(xi)) < eps) return xi;
  else return newton(xi, eps, func, dev);
  return xi;
}
