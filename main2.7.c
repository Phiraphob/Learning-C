#include<stdio.h>
//ฟังก์ชัน Paramiter
void showname();
void cal();
int main(){
    int number1=100,number2=200;
    cal(number1,number2);
    return 0;
}
void showname(char name[20],char lname[20]){
    printf("Hi , %s %s\n",name,lname);
}

void cal(int a , int b){
    printf("Total = %d\n",a+b);
}
