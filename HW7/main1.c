#include <stdio.h>

int main()
{
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            if(j==0){
            printf("%*d ",n-i+1,i);
            continue;
            }
            printf("%d ",i);
        }
    printf("\n");
    }

    return 0;
}
