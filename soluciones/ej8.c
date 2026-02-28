#include <stdio.h>

int main() {
    int base = 2000;
    int dir = 2024;
    int i = 1;
    int j = 2;
    int size = sizeof(int);

    int columnas;
    int total_bytes;
    int total_elementos;

    // Despeje de columnas:
    // dir = base + (i * columnas + j) * size
    // (dir - base) / size = i * columnas + j
    // columnas = ((dir - base) / size - j) / i

    columnas = ((dir - base) / size - j) / i;

    // Como i = 1, esto se simplifica bastante

    total_elementos = (i + 1) * columnas;
    total_bytes = total_elementos * size;

    printf("Numero de columnas: %d\n", columnas);
    printf("Tamaño total: %d bytes\n", total_bytes);

    return 0;
}
