#include<stdio.h>

int main(){

    //Input
    int score;
    char grade;
    printf("Input score ");
    scanf("%d",&score);

    //process
    if(score>=80 && score<=100){
        grade='A';
    }else if(score>=70 && score<=79){
        grade='B';
    }else if(score>=60 && score<=69){
        grade='C';
    }else if(score==0 && score<=59){
        grade='F';
    }else{
        grade='N';
    }

    printf("Result %c",grade);
    return 0;
}
