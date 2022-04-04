#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter 1st number\n");
    scanf("%d",&a);
    printf("enter 2nd number\n");
    scanf("%d",&b);
    printf("enter 3rd number\n");
    scanf("%d",&c);
    if (a>b&&a>c) {
        printf("%d is greatest\n",a);
        
    }
    else if (b>a&&b>c){
        printf("%d is greatest\n",b);
    }
        else if(c>b&&c>a){
            printf("%d is greatest\n",c);
        }
    return 0;
}
