#include <stdio.h>


int main(void) {
  int numero;
  int result;
  printf("introducir numero entero positivo: \n");
  scanf("%d", &numero);
  result=numero*(numero+1)/2;
  printf("%d", result);
  return 0;
}