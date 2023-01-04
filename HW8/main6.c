#include <stdio.h>

void print_spaces(int rows,int r) {
    for(int i=0;i<rows-r;i++) {
        printf(" ");
    }
}

void print_stars(int r) {
    for(int i=0;i<1+2*(r-1);i++){
        printf("*");
    }
    printf("\n");
}

void print_housespaces(int n) {
    for(int i=1;i<=2*(n-1)-1;i++) {
        printf(" ");
    }
}
int main()
{
    int n=4;
    for(int r=1;r<=n;r++) {
        print_spaces(n,r);
        print_stars(r);
    }
    print_stars(n);
    for(int i=1;i<=n;i++) {
        printf("*");
        print_housespaces(n);
        printf("*\n");
    }
    print_stars(n);
    

    return 0;
}
