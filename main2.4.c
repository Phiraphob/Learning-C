#include<stdio.h>

int main(){
    //หาผลรวมและค่าเฉลี่ย

    //Input
    int count;

    printf("Input Count ");
    scanf("%d",&count);


    int number[count];
    float sum,avg;
    for(int i=0;i<count;i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&number[i]);
    }
    //Process
    for(int j=0;j<count;j++){
        sum = sum+number[j];
    }
    avg = sum/count;
    //Output
    printf("Total = %.2f\n",sum);
    printf("Average = %.2f\n",avg);

    return 0;
}
