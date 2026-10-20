#include<stdio.h>
//พื้นที่วงกลม

int main(){

    float Pi=3.14;
    int r;
    int R;
    float c;
    printf("read r = ");
    scanf("%d",&r);
    if(r==r){
        R=r*r;
        c=Pi*R;
    }

    printf("result = %.2f",c);

    return 0;
}
