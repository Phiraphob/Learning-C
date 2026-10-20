#include<stdio.h>
//Pointer

int main(){

    int number=10;
    int *p1=&number;
    printf("Value = %d\n",number);
    printf("Pointer Address = %p\n",p1);
    printf("Pointer Value = %d\n",*p1);


    return 0;
}
