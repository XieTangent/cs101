#include <stdio.h>

int main()
{
    int i=12345;
    int a,b;
    if(i>=1000){
    a=(i/1000)%10,b=i%10;
    }else{
    a=0,b=i%10;
    }
    i=i-a*1000-b+a+b*1000;
    printf("%d",i);

    return 0;
}
