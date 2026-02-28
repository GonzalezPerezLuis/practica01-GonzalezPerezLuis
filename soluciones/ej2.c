
#include <stdio.h>
int main(){
    int a[10];

    printf("&a[4] = %p\n", &a[4]);
    printf("&a[5] = %p\n", &a[5]);

    if(&a[4]>&a[5])
        printf("La direccion mayor es &a[4]\n");
    else
        printf("La direccion mayor es &a[5]\n");
    return 0;
}
