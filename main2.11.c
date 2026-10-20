#include<stdio.h>
//local & global
void deposite(int value);
void withdrew(int amount);
int getbalance();
int balance=1000;//global
int main(){


    printf("Balance = %d\n",getbalance());
    deposite(100);
    printf("Balance = %d\n",getbalance());

    return 0;
}
void deposite(int value){//local
    if(value>0){
        balance+=value;
    }else{
        printf("Error\n");
    }
}
void withdrew(int amount){
    if(amount<=balance){
        balance-=amount;
    }else{
        printf("Error\n");
    }
}
int getbalance(){
    return balance;
}
