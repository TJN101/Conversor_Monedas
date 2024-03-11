#include <stdio.h>

// Función para convertir de quetzales a dólares estadounidenses
double quetzales_a_dolares(double cantidad) {
    // Tasa de cambio de quetzales a dólares
    double tasa = 0.129;
    return cantidad * tasa;
}

// Función para convertir de dólares estadounidenses a quetzales
double dolares_a_quetzales(double cantidad) {
    // Tasa de cambio de dólares a quetzales
    double tasa = 7.74;
    return cantidad * tasa;
}

// Función para convertir de euros a dólares estadounidenses
double euros_a_dolares(double cantidad) {
    // Tasa de cambio de euros a dólares
    double tasa = 1.10;
    return cantidad * tasa;
}

// Función para convertir de dólares estadounidenses a euros
double dolares_a_euros(double cantidad) {
    // Tasa de cambio de dólares a euros
    double tasa = 0.91;
    return cantidad * tasa;
}

int main() {
    int opcion;
    double cantidad;
    char continuar;
    
    do {
        printf("\nBienvenido al conversor de monedas\n");
        printf("Seleccione la opción deseada:\n");
        printf("1. Quetzales a Dólares\n");
        printf("2. Dólares a Quetzales\n");
        printf("3. Euros a Dólares\n");
        printf("4. Dólares a Euros\n");
        printf("5. Quetzales a Euros\n");
        printf("6. Euros a Quetzales\n");
        printf("7. Salir\n");
        scanf("%d", &opcion);
        
        switch(opcion) {
            case 1:
                printf("Ingrese la cantidad en quetzales: ");
                scanf("%lf", &cantidad);
                printf("%.2f quetzales son %.2f dólares\n", cantidad, quetzales_a_dolares(cantidad));
                break;
            case 2:
                printf("Ingrese la cantidad en dólares: ");
                scanf("%lf", &cantidad);
                printf("%.2f dólares son %.2f quetzales\n", cantidad, dolares_a_quetzales(cantidad));
                break;
            case 3:
                printf("Ingrese la cantidad en euros: ");
                scanf("%lf", &cantidad);
                printf("%.2f euros son %.2f dólares\n", cantidad, euros_a_dolares(cantidad));
                break;
            case 4:
                printf("Ingrese la cantidad en dólares: ");
                scanf("%lf", &cantidad);
                printf("%.2f dólares son %.2f euros\n", cantidad, dolares_a_euros(cantidad));
                break;
            case 5:
                printf("Ingrese la cantidad en quetzales: ");
                scanf("%lf", &cantidad);
                printf("%.2f quetzales son %.2f euros\n", cantidad, dolares_a_euros(quetzales_a_dolares(cantidad)));
                break;
            case 6:
                printf("Ingrese la cantidad en euros: ");
                scanf("%lf", &cantidad);
                printf("%.2f euros son %.2f quetzales\n", cantidad, dolares_a_quetzales(euros_a_dolares(cantidad)));
                break;
            case 7:
                printf("Gracias por usar el conversor de monedas. ¡Hasta luego!\n");
                return 0;
            default:
                printf("Opción no válida\n");
                break;
        }
        
        printf("¿Desea realizar otra conversión? (s/n): ");
        scanf(" %c", &continuar); // Leer un carácter (ignorando espacios en blanco)
    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}