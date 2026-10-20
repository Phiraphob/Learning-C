#include<stdio.h>
#include<string.h>

int main(){
    //ระบบธนาคารง่ายๆ

    char username[10],password[10];
    int choice;

    printf("username : ");
    scanf("%s",&Username);
    printf("password : ");
    scanf("%s",&Password);

    if(strcmp(username,"Phiraphob")==0 && strcmp(password,"1234")==0){
        printf("Login complete");
        printf("Selete Choice (1-3) : ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Withdraw\n");
        }else if(choice==2){
            printf("Deposite\n");
        }else if(choice==3){
            printf("Logout\n");
        }
    }else{
        printf("Not found");
    }
    return 0;
}
