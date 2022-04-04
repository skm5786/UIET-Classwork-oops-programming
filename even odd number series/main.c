#include <stdio.h>

int main(){
    int n,i,k;
    printf("press 1 for even number series\n");
    printf("press 2 for even number series\n");
    scanf("%d",&n);
    if (n==1) {
        for (i=2; i<101; i++) {
            if (i%2==0) {
                printf("%d\n",i);
            }
        }
    }
    else if (n==2){
    for (k=1; k<101; k++) {
        if (k%2!=0) {
            printf("%d\n",k);
        }
    }
}
    return 0;
}
