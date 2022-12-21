#include <stdio.h>

int main()
{
    int i=10;
    if(i%4==0 && i%100!=0){
    printf("是");
    }else if(i%400==0){
    printf("是");
    }else{
    printf("不是");
    }

    return 0;
}
