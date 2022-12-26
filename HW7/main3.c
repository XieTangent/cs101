#include <stdio.h>

int main()
{
    for(int x=1,y=1;x<10;y++){
    printf("%d*%d=%d\t",x,y,x*y);
    if(y==9){
    x++;
    y=0;
    printf("\n");
    }
    }
    return 0;
}

