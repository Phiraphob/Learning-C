#include<stdio.h>
#include<ctype.h>
#include<math.h>
//ฟังก์ชันมาตรฐานเกี่ยวกับคณิตศาสตร์

int main(){

    float number1 = 3.5;
    float number2 = 3.5;
    float number3 = -5;
    float result4 = fabs(number3);//ค่าสัมบูรณ์
    float result = ceil(number1);//ปัดทศนิยมขึ้น
    float result3 = floor(number2);//ปัดทศนิยมลง
    float result2 = pow(2,4);//ยกกำลัง
    float result1 = sqrt(9);//รูท 2

    printf("%.2f\n",result2);
    printf("%.2f\n",result1);
    printf("%.2f\n",result);
    printf("%.2f\n",result3);
    printf("%.2f\n",result4);

    return 0;
}
