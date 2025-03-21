#include <stdio.h>

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino);

int main() {
    int opcionOrigen, opcionDestino;
    float cantidad;

    printf("Conversor de Monedas\n");
    printf("Opciones de moneda:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");

    // Ingreso de la cantidad a convertir
    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    // Selección de moneda de origen
    printf("Seleccione la moneda de origen:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcionOrigen);

    // Selección de moneda de destino
    printf("Seleccione la moneda de destino:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dólares estadounidenses (USD)\n");
    printf("3. Euros (EUR)\n");
    printf("Opción: ");
    scanf("%d", &opcionDestino);

    // Realización de la conversión
    convertirMoneda(cantidad, opcionOrigen, opcionDestino);

    return 0;
}

void convertirMoneda(float cantidad, int opcionOrigen, int opcionDestino) {
    // Tasas de cambio actuales (ajustar según la tasa actual)
    float tasaCambio[3][3] = {
        {1.0, 0.13, 0.11}, // Quetzales a (GTQ, USD, EUR)
        {7.7, 1.0, 0.85},  // Dólares a (GTQ, USD, EUR)
        {9.0, 1.18, 1.0}   // Euros a (GTQ, USD, EUR)
    };

    // Calcular el valor de la conversión
    if (opcionOrigen < 1 || opcionOrigen > 3 || opcionDestino < 1 || opcionDestino > 3) {
        printf("Opción inválida.\n");
        return;
    }

    float resultado = cantidad * tasaCambio[opcionOrigen - 1][opcionDestino - 1];
    printf("El resultado de %.2f ", cantidad);

    // Imprimir el tipo de cambio y el resultado
    if (opcionOrigen == 1) {
        printf("quetzales a ");
    } else if (opcionOrigen == 2) {
        printf("dólares a ");
    } else {
        printf("euros a ");
    }

    if (opcionDestino == 1) {
        printf("quetzales es: %.2f\n", resultado);
    } else if (opcionDestino == 2) {
        printf("dólares es: %.2f\n", resultado);
    } else {
        printf("euros es: %.2f\n", resultado);
    }
}
