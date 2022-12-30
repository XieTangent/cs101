#include <stdio.h>

int main()
{
    int i=15;
    int ans=0;
    while(i!=0){
        i&=i-1;
        ans++;
    }
    printf("%d",ans);

    return 0;
}
