#include <stdio.h>


int decimalToBinary(int d);
int main (){

   int num ;
   printf("please enter number");
   scanf("%d",&num);
   decimalToBinary(num);
   printf("%d",decimalToBinary(num));

return 0;
}

int decimalToBinary(int d)
{
    int bin=0,rem,count=1;
    while(d!=0){
    rem=d%2;
    bin+=rem*count;
    count*=10;
    d/=2;
    }
    return bin;
}
