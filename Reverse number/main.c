#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , reverse;
    reverse=0;
    printf("Please enter the number :");
    scanf("%d",&num);
    while(num !=0){
        reverse = (reverse*10)+(num%10);
        num/=10;
    }
    printf("reversed number is =%d",reverse);
    return 0;
}
