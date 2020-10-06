#include<stdio.h>
int while1(){
    int i=1,j,sum=0;
    printf("Enter Number: ");
    scanf("%d",&j);
    while(i<=j){
        printf("%d ",i);
        sum =sum+i;
        i=i+1;

    }
    printf("\nSUM = %d",sum);
    return 0;
}
