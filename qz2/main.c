#include <stdio.h>
void printf_space(int r){
    for(int i=1;i<r*2-1;i++){
        printf(" ");
    }
}

void printf_stars(int rows,int r){
    for(int i=0;i<1+2*(rows-r);i++){
        printf("* ");
    }
}

int main()
{
    int rows=5;
    for(int r=1;r<=rows;r++){
        printf_space(r);
        printf_stars(rows,r);
        printf("\n\n");
    }

    return 0;
}
