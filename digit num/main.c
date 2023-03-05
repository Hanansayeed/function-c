#include <stdio.h>
#include <stdlib.h>
void fun_convert(int num,int num2);
int main()
{
 int i,j;
    printf("enter number");
    scanf("%d",&i);
    printf("enter digit");
    scanf("%d",&j);
    fun_convert(i,j);

    return 0;
}


void fun_convert(int num,int num2)
{
    int x,i;
    for(i=0;i<num2;i++)
    {
       x= num%10;
       num=num/10;
    }
    printf("%d",x);

}

