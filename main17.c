#include<stdio.h>

int main(){
    //‡‡¡Ë Ÿµ√§Ÿ≥

    int number;
    printf("Input Number ");
    scanf("%d",&number);

    printf("------Table %d ------\n",number);

    for(int i=1;i<=12;i++){
        printf("%d x %d = %d\n",number,i,number*i);
    }

    return 0;
}
