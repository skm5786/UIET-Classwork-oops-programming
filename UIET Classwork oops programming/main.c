//fibnacci sequence

#include <stdio.h>

int main()
{
    int a,b,c,n,i;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for (a=0,b=1,i=1; i<=n; i++) {
        c=a+b;
        printf("%d\n",a);
        a=b;
        b=c;
    }
    return 0;
}
