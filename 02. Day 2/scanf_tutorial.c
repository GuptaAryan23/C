#include<stdio.h>

void main(){
    int num;
    printf("Enter a number >> ");
    scanf("%d",&num);
    printf("So the number taken as input is %d.\n",num);

    int number_plus_5;
    // Add 5 to the number taken
    number_plus_5  = num + 5;

    printf("The number after addition of five is %d\n",number_plus_5);

    

    // Taking name is as input

    char name[50];

    printf("Enter your name >> ");
    scanf("%s",&name);
    printf("Your name is %s.\n",name);    
}