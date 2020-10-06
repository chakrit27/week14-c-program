#include<stdio.h>
int for1(){
    int i,sum=0;
    for(i=1;i<=3;i++){
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    return 0;
}
