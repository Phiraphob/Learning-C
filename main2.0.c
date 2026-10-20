#include<stdio.h>

int main(){
    //getchar & putchar

    char confirm;

    printf("Do u want to exit program (Y/N) ");
    confirm=getchar();
    putchar(confirm);

    return 0;
}
