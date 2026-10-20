#include<stdio.h>
#include<string.h>
//¿Ñ§¡ìªÑ¹ÃÑº¤èÒ structure

typedef struct{
    char name[20];
    char gender;
    int age;
}Employee;
void Showdata(Employee person);
int main(){

    Employee emp1={"Phiraphob",'M',16};
    Showdata(emp1);

    Employee emp2={"Mind",'F',15};
    Showdata(emp2);

    return 0;
}
void Showdata(Employee person){
    printf("Name %s\n",person.name);
    printf("Gender %c\n",person.gender);
    printf("Age %d\n",person.age);
    printf("----------------\n");
}
