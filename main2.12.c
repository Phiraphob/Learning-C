#include<stdio.h>
#include<ctype.h>
//ฟังก์ชันมาตรฐานเกี่ยวกับ char

int main(){

    char letter='a';
    char letter1='b';
    printf("Value = %c\n",letter);
    printf("Value = %c\n",letter1);
    printf("Upper = %c\n",toupper(letter));
    printf("Upper = %c\n",tolower(letter));
    printf("Lower = %c\n",toupper(letter1));
    printf("Lower = %c\n",tolower(letter1));
    return 0;
}
