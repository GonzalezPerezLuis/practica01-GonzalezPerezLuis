#include <stdio.h>

int main()
{
    int m[2][4];
    int i,j;
    
    printf("Las direcciones de memoria son: \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++);{
        printf("&m[%d][%d] = %p\n", i,j,&m[i][j]);
        }
    }
    return 0;
}
