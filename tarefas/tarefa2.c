//O programa deve receber a temperatura em graus Celsius e 
// converter para Kelvin e Fahrenheit.

#include <stdio.h>
#include <math.h>

int main() {

    float c;
    printf("digite a temperatura em celsius:");
    scanf("%f", &c);
    printf("farenheit: %f\n", (c * 9/5) + 32);
    printf("kelvin: %f\n", c - 273.15);

    return 0;
}
