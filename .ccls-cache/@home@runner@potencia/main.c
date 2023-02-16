#include <stdio.h>

int potencia(int x,int n){
  if (n == 0)
    return 1;
  if (n > 0 && n % 2 == 0){
    int r = potencia(x,n/2);
    return r * r;
  }
  else{
    int r = potencia(x,(n-1)/2);
    return x * r * r;
  }   
}

int main() {
  printf("%i",potencia(2,4));
}