#include<stdio.h>

int main(){

    float Pi=3.14;
    int r;
    int R;
    float c;
    printf("read r = ");
    scanf("%d",&r);
    if(r>0){
        R=r*r;
        c=Pi*R;
    }else{
        printf("Error\n");
    }

    printf("result = %.2f",c);

    return 0;
}
