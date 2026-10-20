#include<stdio.h>

int main(){
    //หาผลรวม(ไม่จำกัดจำนวน)

    int number,total=0;

    while(1){
        printf("Intput Number ");
        scanf("%d",&number);
        if(number<=0){
            break;
        }
        total+=number;
    }
    printf("Result = %d\n",total);
    return 0;
}
