#include <stdio.h>

int main() {
    int a[5];

    printf("&a[-1] = %p\n", &a[-1]);   //Imprime una direccion de memoria antes del arreglo
    printf("&a[5]  = %p\n", &a[5]);    //Imprime una direccion de memoria despues del arreglo

    return 0;
}

/* ¿Por que compila?
 Porque el legunaje C no verifica los limites de los arreglos, entonces 
 el compilador no marca error

¿Por que es peligroso?
 Porque se imprimen indices invalidos, y esto provoca acceso a 
 memoria que no pertenece al arreglo y puede provocar corrupcion de datos

¿Que revela sobre memoria?
 Los arreglos ocupan bloques de memoria continuos entre si, se puede acceder 
 a direcciones que no estan en el arreglo (tanto anteriores como posteriores)
 
*/ 
