#include <iostream>
#include <cmath>
/*

int main() {
  int A[10] = {5,3,2,1,5,1,4,2,1,6};
  int pares = 0, impares = 0;
  for (int i = 0; i < 10; ++i) {
    if (A[i] % 2 == 0) {
      ++pares;
    }
    else {
      ++impares;
    }
  }
  std::cout << pares << " " << impares << std::endl;
  return 0;
}

*/

/*
int main() {
  int n, m;
  int A[10] = {5,3,2,1,5,1,4,2,1,6};
  int ind3[m], impares[n];

  for (int i = 0; i < 10; ++i) {
    if (A[i] % 3 == 0) {
      ind3[i] = i;
    }
    else {
      impares[i] = A[i];
    }
  }
  std::cout << "indice: " << ind3 << " número no múltiplos: " << impares << std::endl;
  return 0;
}

*/

int main() {
  int A[10] = {5,3,2,1,5,1,4,2,1,6};
  int multiplo = 0, nomultiplo = 0;
  int* T = new int[10];
  int* N = new int[10];
  int suma3{0}, no3{0};
  for (int i = 0; i < 10; ++i) {
    if (A[i] % 3 == 0) {
      ++multiplo;
      T[multiplo] = i;
      suma3 += A[i];
    }
    else {
      ++nomultiplo;
      N[nomultiplo] = A[i];
      no3 += A[i];
    }
  }
  double sumaelementos{0};
  for (int i = 0; i <= nomultiplo; ++i) {
    sumaelementos += N[i] * N[i];
  }
  double modulo = sqrt(sumaelementos);
  //std::cout << "multiplo de 3: " << multiplo << "; no multiplo de 3: " << nomultiplo << std::endl;
  std::cout << "multiplo de 3: " << suma3 << "; no multiplo de 3: " << no3 << std::endl;
  std::cout << "módulo: " << modulo << std::endl;
  return 0;
}