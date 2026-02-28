//Corregido para que no falle

include <stdio.h>
int gigante[1000000];

int main() {

	return 0;
}

/* Si falla:
1. explica causa
Si el arreglo se declara dentro de una función, se almacena dentro del stack,
este tiene un tamaño de memoria limitado y al querer almacenar un arreglo tan grande
puede que ocurra un desbordamiento

2. indica dónde se almacena
Si se declara en una funcion, se almacena en el stack

3. propone solución sin memoria dinámica
Hacer que el arreglo sea global para que se almacene en la memoria estatica (DATA/BSS)

*/
