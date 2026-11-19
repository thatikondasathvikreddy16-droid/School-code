#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=2*i+1;
    }
    printf("INDEX\tVALUE\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t%d\n",i,arr[i]);
    }
    return 0;
}