
#include <stdio.h>
int main(){
    int a[10];

    printf("&a[0] = %p\n", &a[0]);
    printf("&a[3] = %p\n", &a[3]);
    printf("&a[5] = %p\n", &a[5]);

    printf("Tamaño del tipo = %d\n", sizeof(int));
    return 0;
}
