#include<stdio.h>
#include<string.h>

int main(){
    //ระบบธนาคาร switch case

    int service;
    printf("Input service number (1-3) ");
    scanf("%d",&service);

    switch(service){
    case 1:
        printf("Create Account\n");
        break;
    case 2:
        printf("Withdraw\n");
        break;
    case 3:
        printf("Deposite\n");
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}
