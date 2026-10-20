#include<stdio.h>

int main(){
    //Nested Loop
    //เเม่สูตรคูร(เเบบกำหนดช่วง)

    int start,end;
    printf("Input start ");
    scanf("%d",&start);
    printf("Input end ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        printf("-----Table %d -----\n",i);
        for(int j=1;j<=12;j++){
        printf("%d x %d = %d\n",i,j,i*j);
        }
    }
    return 0;
}
