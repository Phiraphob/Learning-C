#include<stdio.h>
#include<string.h>
//Structure
struct user{
    char name[20];
    char gender;
    int age;
};
int main(){

    struct user emp1;
    strcpy(emp1.name,"Phiraphob");
    emp1.gender='M';
    emp1.age=16;

    printf("Name %s\n",emp1.name);
    printf("Gender %c\n",emp1.gender);
    printf("Age %d\n",emp1.age);

    printf("----------------\n");

    struct user emp2;
    strcpy(emp2.name,"Mind");
    emp2.gender='F';
    emp2.age=16;

    printf("Name %s\n",emp2.name);
    printf("Gender %c\n",emp2.gender);
    printf("Age %d\n",emp2.age);

    return 0;
}
