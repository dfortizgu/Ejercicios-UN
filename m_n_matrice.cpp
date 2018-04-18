#include<iostream>
#include <vector>

using fptr = int(const std::vector<int> &, const std::vector<int> &, int, int, int, int, int);

//Retorna el valor de la entrada de la matriz resultante
int product(const std::vector<int> &A, const std::vector<int> &B, int m, int n, int M, int P, int N);
void printM(const std::vector<int> &A, const std::vector<int> &B, int M, int P, int N, fptr punto);

int main(void){
  //A matriz de tamaño M*P
  //A matriz de tamaño P*N

  int M=2;
  int P=5;
  int N=2;

  if(M!=N){
    std::cout<<"ERROR, las matrices no son multiplicables";
    return 1;
  }


  std::vector<int> A;
  A.resize(N*N);
  A={1,2,3,4,5,6,7,8,9,10}; //Modificar A y B por filas, de izquierda a derecha y de arriba a abajo 
  std::vector<int> B;
  B={1,2,3,4,5,6,7,8,9,10};
  B.resize(N*N);

  printM(A,B,M,P,N,product);

  return 0;

}

//m(filas) y n(columnas) son los indices de la entrada a la cual calcula el valor(entradas de matriz convencional)
int product(const std::vector<int> &A, const std::vector<int> &B, int m, int n, int M, int P, int N){
  int sum = 0;
  for(int i = 0 ; i<P ; i++){
    sum+= A[(m-1)*P+i]*B[i*N+n-1];
    /*Toma la entrada m y n, dado que son las entradas de la matriz de forma comun, de 1 hasta n se le resta
    1, luego se reccorre cada matriz, en el caso de a se fija en la fila m-1, multiplicado por el numero
    de columnas P, y se varia la casilla horizontal i, y para B se deja fijo en la columna n-1 y se varia el
    i multiplicado por el numero de columanas N para cambiar la fila*/
  }
  return sum;
}

void printM(const std::vector<int> &A, const std::vector<int> &B, int M, int P, int N, fptr punto){
  //El resultado es una matriz de tamaño M*N
  for(int i = 1; i<= M; i++){
    for(int j = 1; j<=N ; j++){
      std::cout<<punto(A,B,i,j,M,P,N)<<"  ";
    }
    std::cout<<"\n\n";
  }
}
