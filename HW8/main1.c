#include <stdio.h>

void printf_spaces(int rows,int r) {
    for(int i=0;i<rows-r;i++) {
        printf(" ");
    }
}

void printf_stars(int r) {
    for(int i=0;i<1+2*(r-1);i++){
        printf("*");
    }
}

int main()
{
    int rows=10;
    for(int r=0;r<rows;r++) {
        printf_spaces(rows,r);
        printf_stars(r);
        printf("\n");
    }

    return 0;
}
