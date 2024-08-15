#include <stdio.h>

int main() {
    int n, m, c, r;

    printf("Introduce el primer número (n): ");
    scanf("%d", &n);

    printf("Introduce el segundo número (m): ");
    scanf("%d", &m);
    c = n / m;
    r = n % m;

    printf("%d entre %d da un cociente %d y un resto %d\n", n, m, c, r);

    return 0;
}
