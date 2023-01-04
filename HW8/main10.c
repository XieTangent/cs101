#include <stdio.h>

int get_digit(int n,int j) {
    return n%10*j;
}
int main()
{
    int n=1234;
    int sum=0;
    int k=n,j=1;
    while(k>10) {
        j*=10;
        k/=10;
    }
    while(n) {
        sum+=get_digit(n,j);
        j/=10;
        n/=10;
    }
    
    printf("sum=%d",sum);

    return 0;
}
