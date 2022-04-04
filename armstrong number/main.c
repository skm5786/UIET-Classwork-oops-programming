#include <stdio.h>

int main(){
    int r,sum=0,n,c,a;
    printf("enter your number\n");
    scanf("%d",&n);
    a=n;
    while (n>0) {
        
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n=a;
    if (n==sum) {
        printf("number is armstrong\n");
        
    }
        else if(n!=sum) 
    printf("number is not armstrong\n");
    
    return 0;
}
