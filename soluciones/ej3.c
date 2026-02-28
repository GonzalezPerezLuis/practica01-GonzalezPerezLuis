#include <stdio.h>

int main()
{
    int a[3]; 
    int b[3];
    int c[3];

    printf("Direcciones de memoria de a\n");    
    for(int i=0; i<3; i++){    
        printf("&a[%d] = %p\n", i, &a[i]);
    }

    printf("Direcciones de memoria de b \n");
    for(int i=0; i<3; i++){
        printf("&b[%d] = %p\n", i, &b[i]);
    }

    printf("Direcciones de memoria de c \n");    
    for(int i=0; i<3; i++){
        printf("&c[%d] = %p\n", i, &c[i]);
    }
    return 0;
}
