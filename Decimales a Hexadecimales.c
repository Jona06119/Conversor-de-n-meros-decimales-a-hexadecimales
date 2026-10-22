#include <stdio.h>

int main() {
long long decimal;
char hexadecimal[17];
char digitos[] = "0123456789ABCDEF";
int i = 0;

printf("====================================\n");
printf(" DECIMAL A HEXADECIMAL\n");
printf("====================================\n");

printf("Ingresa un numero decimal entero: ");

if (scanf("%lld", &decimal) != 1) {
    printf("Error: debes ingresar un numero entero.\n");
    return 1;
}

if (decimal < 0) {
    printf("Error: ingresa un numero positivo o cero.\n");
    return 1;
}

if (decimal == 0) {
    printf("El numero hexadecimal es: 0\n");
    return 0;
}

while (decimal > 0) {
    int residuo = decimal % 16;

    hexadecimal[i] = digitos[residuo];

    decimal = decimal / 16;
    i++;
}

printf("El numero hexadecimal es: ");

for (int j = i - 1; j >= 0; j--) {
    printf("%c", hexadecimal[j]);
}

printf("\n");

return 0;
}
