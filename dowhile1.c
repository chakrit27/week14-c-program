#include<stdio.h>
int dowhile1(){
    int i=1,j,sum=0;
    printf("Enter number: ");
    scanf("%d",&j);
    do{
        printf("%d ",i);
        sum=sum+i;
        i++;
    }
    while(i<=j);
    printf("\nSUM = %d",sum);
    return 0;
}
