#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
//ฟังก์ชันมาตรฐานเกี่ยวกับข้อความ

int main(){

    char name[20]="Phiraphob";
    char copyname[20];
    strcpy(copyname,name);//copy
    strcat(copyname,"Studio");//การต่อ string
    printf("count = %d\n",strlen(name));//แสดงจำนวนตัวอักษร strlen
    printf("%s\n",name);
    printf("%s\n",copyname);
    if(strcmp(copyname,name)==0){
        printf("Equal \n");
    }else{
        printf("Not Equal \n");
    }

    return 0;
}
