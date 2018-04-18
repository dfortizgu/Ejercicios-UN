#include<iostream>
#include <vector>

using fptr = int(const std::vector<int> &, const std::vector<int> &, int, int, int);

//Retorna el valor de la entrada de la matriz resultante
int producto(const std::vector<int> &A, const std::vector<int> &B, int m, int n, int N);
void print(const std::vector<int> &A, const std::vector<int> &B, int N, fptr punto);

int main(void){
  //A y B matrices cuadradas de tamaño N*N
  int N=5;
  std::vector<int> A;
  A.resize(N*N);
  A={1,2,3,4};
  std::vector<int> B;
  B={5,6,7,8};
  B.resize(N*N);

  print(A,B,N,producto);

}

//m(filas) y n(columnas) son los indices de la entrada a la cual calcula el valor(entradas de matriz convencional)
int producto(const std::vector<int> &A, const std::vector<int> &B, int m, int n, int N){
  int sum = 0;
  for(int i = 0 ; i<N ; i++){
    sum+= A[(m-1)*N+i]*B[i*N+n-1];
  }
  return sum;
}

void print(const std::vector<int> &A, const std::vector<int> &B, int N, fptr punto){
  for(int i = 1; i<=N ; i++){
    for(int j = 1; j<=N ; j++){
      std::cout<<punto(A,B,i,j,N)<<"  ";
    }
    std::cout<<"\n\n";
  }
}
