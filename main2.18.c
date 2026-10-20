#include<stdio.h>
#include<string.h>
//สร้างชนิดข้อมูลใหม่ด้วย typedef

typedef struct{
    char name[20];
    char gender;
    int age;
}Employee;
int main(){

    Employee emp1={"Phiraphob",'M',16};

    printf("Name %s\n",emp1.name);
    printf("Gender %c\n",emp1.gender);
    printf("Age %d\n",emp1.age);

    printf("----------------\n");

    Employee emp2={"Mind",'F',15};

    printf("Name %s\n",emp2.name);
    printf("Gender %c\n",emp2.gender);
    printf("Age %d\n",emp2.age);

    return 0;
}
