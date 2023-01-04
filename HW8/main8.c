#include <stdio.h>
void printf_space(int r){
    for(int i=1;i<r;i++){
        printf(" ");
    }
}

void printf_stars(int rows,int r){
    for(int i=0;i<1+2*(rows-r);i++){
        printf("*");
    }
    printf("\n");
}

int main()
{
    int rows=4;
    int r;
    for(r=1;r<=rows;r++){
        printf_space(r);
        printf_stars(rows,r);
    }
    r--;
    for(r;r>=1;r--) {
        printf_space(r);
        printf_stars(rows,r);
    }

    return 0;
}
