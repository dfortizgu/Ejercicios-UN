#include <iostream>
#include <cmath>

using fptr = double(double);

double funcion(double x);
double bisection(double xl, double xu, double eps, fptr func);

int main(void){
  std::cout<< bisection(0,2,1.0e-8,funcion)<<"\n";
  return 0;
}

double funcion(double x){
  return x*x-2;
}

double bisection(double xl, double xu, double eps, fptr func){
  double xr = 0;
  xr = 0.5*(xu + xl);
  if(std::fabs(func(xr)) < eps){
    return xr;
  }
  else if(func(xl)*func(xr) < 0){
      return bisection(xl,xr,eps, func);
    }
  else{
      return bisection(xr,xu,eps, func);
    }
}
