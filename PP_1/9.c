#include <stdio.h>
#include <math.h>

int main() {
    double cantidad, interes_anual, capital_obtenido;
    int anios;

    printf("Introduce la cantidad a invertir: ");
    scanf("%lf", &cantidad);

    printf("Introduce el interés anual (en porcentaje): ");
    scanf("%lf", &interes_anual);

    printf("Introduce el número de años: ");
    scanf("%d", &anios);

    capital_obtenido = cantidad * pow(1 + interes_anual / 100, anios);

    printf("El capital obtenido en la inversión es: %.2lf\n", capital_obtenido);

    return 0;
}
