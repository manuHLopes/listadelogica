#include <stdio.h>

// Função para converter Celsius para Fahrenheit
void celsiusToFahrenheit(float *celsius, float *fahrenheit) {
    *fahrenheit = (*celsius * 9 / 5) + 32;
}

int main() {
    // variáveis para armazenar as temperaturas
    float celsius, fahrenheit;

    // digitar a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Ponteiros 
    celsiusToFahrenheit(&celsius, &fahrenheit);

    // Exibe a temperatura 
    printf("%.2f Celsius é equivalente a %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
