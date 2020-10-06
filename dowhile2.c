#include<stdio.h>
int dowhile2(){
    char c;
    int i=1;
    int choice,dummy;
    do{
        printf("Please Enter Choice: ");
        printf("\n1.Print Hello");
        printf("\n2.Print Java");
        printf("\n3.Exit : ");
        printf("\n4.Select Choice");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Hello");
            break;
        case 1:
            printf("Java");
            break;
        case 1:
            Exit(0);
            break;
            default:
            printf("Please enter valid choice");
        }
        printf("\nDo you want to enter more?: ");
        //scanf("%d",&dummy)
        scanf("%d",&c)
    }
    while(c=='y');
    return 0;
}
