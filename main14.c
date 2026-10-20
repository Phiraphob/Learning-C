#include<stdio.h>

int main(){
    //Break & Continue

    for(int count=1;count<=10;count++){
        if(count==5){
            continue;
        }
        printf("%d\n",count);
    }

    for(int count=1;count<=10;count++){
        printf("%d\n",count);
        if(count==5){
            break;
        }
    }

    return 0;
}
