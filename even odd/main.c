

#include <stdio.h>

int main()
{
    int i=2,n;
    printf("enter your number\n");
    scanf("%d",&n);
    if (n%i==0) {
        printf("number is even\n");
    } else {
        printf("number is odd\n");
    }
    return 0;
}
