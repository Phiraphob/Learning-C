#include<stdio.h>

int main(){
    //หาผลรวมตัวเลข

    int number,total=0;

    for(int count=1;count<=5;count++){
        printf("Input Number%d ",count);
        scanf("%d",&number);
        total+=number;
    }
    printf("Result = %d",total);

    return 0;
}
