#include<stdio.h>
#include<stdbool.h>

int main()
{
    char gender;
    int age;

    printf("Input Gender(M or F) : ");
    scanf("%c",&gender);

    printf("Input Age : ");
    scanf("%d",&age);

    if(gender=='M' && age>=20){
        printf("Pass\n");
    }else{
        printf("Not pass\n");
    }
    return 0;
}
