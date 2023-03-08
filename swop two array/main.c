#include <stdio.h>
#include <stdlib.h>
int swap (int * x, int * y,int n);
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={7,9,10,12,54};
    int n =5;
    int i;
    printf("\nElements of first array: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nElements of second array: \n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }

      swap(a,b,n);
    printf("\nElements of first array: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nElements of second array: \n");
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
int swap (int * x, int * y, int n){
    for(int i=0 ;i< n; i++){
        *(y+i)=*(y+i)^*(x+i);
        *(x+i)=*(y+i)^*(x+i);
        *(y+i)=*(y+i)^*(x+i);
    }


}
