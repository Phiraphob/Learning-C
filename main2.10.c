#include<stdio.h>
//ฟังก์ชันเเบบรับเเละส่งค่า
int power(int base,int n){
    int number=1;
    for(int i=1;i<=n;i++){
        number = base*number;
    }
    return number;
}

int main(){

    int result = power(2,3);
    printf("Result = %d\n",result);

    return 0;
}
