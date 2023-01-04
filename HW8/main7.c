#include <stdio.h>

int get_add(int a) {
    int sum=0;
    if(a<0) {
        while(a>=10) {
        sum+=a%10;
        a/=10;
        }
        sum-=a%10;
    }else {
        while(a>10) {
        sum+=a%10;
        a/=10;
        }
    }
   
    return sum;
}

int main()
{
    int a=-999;
    int b=999;
    printf("%d\n%d",get_add(a),get_add(b));

    return 0;
}
