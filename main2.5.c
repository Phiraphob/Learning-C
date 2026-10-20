#include<stdio.h>

int main(){
    //การสร้างอาร์เรย์ 2 มิติ

    int score[2][4]={
        {10,20,30,40},
        {50,60,70,80}
    };
    int total;
    for(int r=0;r<2;r++){
        printf("Row = %d\n",r);
        for(int c=0;c<4;c++){
            printf("%d\n",score[r][c]);
            total+=score[r][c];
        }
    }
    printf("Total = %d\n",total);
    printf("Average = %d\n",total/8);

    return 0;
}
