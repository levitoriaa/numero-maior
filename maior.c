#include <stdio.h>

int main() {
    int numero1;
    int numero2;

    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2) {
        printf("%d", numero1);
    } else {
        printf("%d", numero2);
    }
}