#include<stdio.h>
//ฟังก์ชันเเบบมีค่าส่งกลับ
int getpromotion();
int main(){

    printf("Today discount = %d baht\n",getpromotion());
    int price;
    printf("Enter Product Price ");
    scanf("%d",&price);
    int Total = price-getpromotion();
    printf("Total = %d\n",Total);

    return 0;
}
int getpromotion(){
    return 100;
}
