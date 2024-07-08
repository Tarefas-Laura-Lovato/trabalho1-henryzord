// Crie um programa que receba um raio de uma circunferência qualquer, calcule e mostre a área dessa circunferência.

#include <stdio.h>
#include <math.h>

int main() {
    const float pi = 3.14;

    float r;
    printf("digite um raio:");
    scanf("%f", &r);

    printf("%.2f\n", pi*r*r);
    return 0;
}
