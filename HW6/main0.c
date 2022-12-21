#include <stdio.h>

int main()
{
    int i=10;
    int j=i&i-1;
    if(j==0){
    printf("true");
    }else if(i==1){
    printf("true");
    }else{
    printf("false");
    }

    return 0;
}
