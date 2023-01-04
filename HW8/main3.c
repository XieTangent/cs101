#include <stdio.h>

void get_binary(int i) {
    int j=16,k=0;
    while(i>j-1) {
        j*=16;
    }
    j>>=1;
    while(j) {
        if((i&j)==0) {
            printf("0");
        }else {
            printf("1");
        }
        j>>=1;
        k++;
        if(k==4) {
            printf(" ");
            k=0;
        }
    }
}

int main()
{
    int i=16;
    get_binary(i);
    
    return 0;
}
