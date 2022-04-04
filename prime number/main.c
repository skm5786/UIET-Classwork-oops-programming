#include <stdio.h>

int main()
{
    int i=2,n;
    printf("enter your number\n");
    scanf("%d",&n);
    while (i<n) {
        
        if (n%i==0) {
            printf("number is comp\n");
            break;
        }
        i++;
       
    }
    if (i==n) {
        printf("number is prime\n");
    }
        
        
        
        
    
        
    return 0;
    
}

