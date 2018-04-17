#include <iostream>
#include <cmath>

using fptr = double(double);

double funcion(double x);
double bisection(double xl, double xu, double eps, int nmax, fptr func);

int main(void){
  std::cout<< funcion(1) <<"\n";
  std::cout<< bisection(-0.1,1,1.0e-8,100,funcion)<<"\n";
}

double funcion(double x){
    return x*x;
}

double bisection(double xl, double xu, double eps, int nmax, fptr func){
  double xr = 0.5*(xu + xl);
  if(std::fabs(func(xr)) < eps)
    {return xr;}
  else
  {
    if(func(xl)*func(xr) < 0)
      return bisection(xr,xu,eps,nmax, func);
    else
      return bisection(xl,xr,eps,nmax, func);
  }
}
