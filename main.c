#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    // Itera sobre posibles valores de 'a'
    for (a = 1; a <= 20; a++) {
        // Itera sobre posibles valores de 'b' (b > a)
        for (b = a + 1; b <= 20; b++) {
            // Calcula el valor de 'c' basado en la fórmula c = sqrt(a^2 + b^2)
            double c_double = sqrt(a * a + b * b);
            c = (int)c_double;

            // Verifica si c es un entero y si cumple con la condición de triple pitagórico
            if (c_double == c && (a * a + b * b == c * c)) {
                printf("%d, %d, %d\n", a, b, c);
            }
        }
    }

    return 0;
}
