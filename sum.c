#include <stdio.h>

int main() {
        int first = 0;
        int second = 0;

        printf("Enter the first number: ");
        scanf("%d", &first);

        printf("Enter the second number: ");
        scanf("%d", &second);

        //scanf("%d %d", &first, &second);


        int result = first + second;
        printf("Sum of %d and %d is %d\n", first, second, result);

        printf("%d %p\n", first, first); //%p - memóriaterület
}