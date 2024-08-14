#include <stdio.h>

int main() {
    
    double horasTrabajadas;
    double costePorHora;
    double pagaTotal;

   
    printf("Introduce el número de horas trabajadas: ");
    scanf("%lf", &horasTrabajadas);

    
    printf("Introduce el coste por hora: ");
    scanf("%lf", &costePorHora);

    
    pagaTotal = horasTrabajadas * costePorHora;

    
    printf("La paga total es: %.2lf\n", pagaTotal);

    return 0;
}
