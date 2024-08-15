#include <stdio.h>

int main() {
    float peso, altura, imc;
  
    printf("Introduce tu peso en kg: ");
    scanf("%f", &peso);

    printf("Introduce tu estatura en metros: ");
    scanf("%f", &altura);

  
    imc = peso / (altura * altura);


    printf("Tu índice de masa corporal es %.2f\n", imc);

    return 0;
}
