#include <stdio.h>

int main() {
        double quadA = 0;
        double quadB = 0;
        printf("Add meg a negyszog teruleteit: ");
        scanf("%f %f", &quadA, &quadB);

        printf("K: %f e, T: %f e^2\n", 2 * (quadA + quadB), quadA * quadB);

        double circleR = 0;
        printf("Add meg a kör sugarát: ");
        scanf("%f", &circleR);
        printf("K: %f e, T: %f e^2\n", 2 * circleR * 3.1415, circleR * circleR * 3.1415);

        // °C >> °F
        double celsius = 0;
        printf("Add meg a homersekletet °C-ban: ");
        scanf("%f", &celsius);

        printf("%f °C = %f °F", celsius, celsius * 1.8 + 32);
}