#include<stdio.h>

void main(){
    //Rupee to Dallar Converter
    double rupee,dollar;

    printf("Enter value in Rupess >> ");
    scanf("%lf",&rupee);

    dollar = rupee * 0.013382455; 

    printf("\nSo %lf rupees is equal to %lf dollars.\n",rupee,dollar);
    
    
}
