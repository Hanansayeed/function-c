#include <stdio.h>
#include <stdlib.h>
int copy (int * arr1,int *arr2, int size);
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5];
    int n =5;
    int i;
    printf("Elements of orignal array: \n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nElements of copy array: \n");
    copy(a,b,n);

    return 0;
}

int copy (int * arr1,int *arr2, int size){
    int i;
    for(i=0;i<size;i++){
        arr2[i]=arr1[i];
    }
        for(i=0;i<size;i++){
        printf("%d ",arr2[i]);
    }
}
