#include<stdio.h>
int main()
{
    int arr[]={38, 21, 19, 72, 64, 311,55, 27, 152, 98};
    int add=0,mul=0;

    for(int i=0;i<10;i++)
    {
        add+=arr[i];
        if (arr[i]%7==0)
        {
            mul++;
        }
    }
    printf("Array:");
    for(int i=0;i<10;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n");
    printf("Sum of array elements: %d\n", add);
    printf("Number of elements divisible by 7: %d\n", mul);
    return 0;
}