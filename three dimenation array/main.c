#include<stdio.h>
#include<conio.h>

int main ()
{
    int row , column ;
    // initialize three array 2D
    int Blue [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Green [3][3]={{11,12,13},{14,15,16},{17,18,19}};
    int Red [3][3]={{21,22,23},{24,25,26},{27,28,29}};
    int * ptr[3] ={Blue ,Green ,Red}; //pointer to array
    int ** pointer= ptr;//pointer to pointer array

    /** show address of arrays
    printf("red address = %p \n ptr[0] = %p\n",Red,ptr[0]);
    printf("green address = %p \n ptr[1] = %p\n",Green,ptr[1]);
    printf("blue address = %p \n ptr[2] = %p\n",Blue,ptr[2]);
    */

    printf("enter the row and column index respectively: ");
    scanf("%d%d",&row,&column); //read from user row&column

    /**show address of pointers
    printf("\n address = %p \t value = %d\n",(pointer+0),*pointer);
    printf("\n address = %p \t value = %d\n",(pointer+1),*pointer);
    printf("\n address = %p \t value = %d\n",(pointer+2),*pointer);
   */

    printf("blue = %d\n",*(*(pointer+0)+(row*3)+column));
    printf("green = %d\n",*(*(pointer+1)+(row*3)+column));
    printf("red = %d\n",*(*(pointer+2)+(row*3)+column));

}
