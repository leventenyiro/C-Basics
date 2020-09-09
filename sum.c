#include <stdio.h>

int main() {
        double quadA = 0;
        double quadB = 0;
        printf("Add meg a negyszog teruleteit: ");
        scanf("%lf %lf", &quadA, &quadB);

        printf("K: %lf e, T: %lf e^2\n", 2 * (quadA + quadB), quadA * quadB);

        double circleR = 0;
        printf("Add meg a kör sugarát: ");
        scanf("%lf", &circleR);
        printf("K: %lf e, T: %lf e^2\n", 2 * circleR * 3.1415, circleR * circleR * 3.1415);

        // °C >> °F
        double celsius = 0;
        printf("Add meg a homersekletet °C-ban: ");
        scanf("%lf", &celsius);

        printf("%lf °C = %lf °F\n", celsius, celsius * 1.8 + 32);
}