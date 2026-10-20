#include<stdio.h>
//func & array
void ShowArray(int arr[],int count);//func protorype
int main(){

    int num[5]={80,90,60,30,20};
    ShowArray(num,5);
    int Height[6]={180,173,170,175,176,183};
    ShowArray(Height,6);
    int Weight[7]={65,62,59,58,66,64,51};
    ShowArray(Weight,7);
    return 0;
}
void ShowArray(int arr[],int count){
    printf("-----Data-----\n");
    for(int i=0;i<count;i++){
        printf("Index%d = %d\n",i,arr[i]);
    }
}
