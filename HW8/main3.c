#include <stdio.h>

void get_binary(int i) {
    int j=16,m=0;
    while(j-1<i) {
        j*=16;
    }
    j/=2;
    while(i) {
        if(j>i) {
            printf("0");
            j/=2;
            m++;
        }else if(j<i) {
            printf("1");
            i-=j;
            j/=2;
            m++;
        }else{
            printf("1");
            m++;
            break;
        }
        if(m==4) {
            printf(" ");
            m=0;
        }
    }
    while(j!=1){
        if(m==4){
            printf(" ");
            m=0;
        }
        printf("0");
        m++;
        j/=2;
    }
}

int main() {
    int i=255;
    get_binary(i);

    return 0;
}
