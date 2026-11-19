#include<stdio.h>
void Reverse(int arr[],int size)
{
    for(int i=size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}


int largest(int arr[],int size)
{
    
    int larg=0;
   for(int i=0;i<size;i++)
   {
    
    if (arr[i]>larg)
      larg=arr[i];
      
   }
   return larg;
}


int main()
{
   int arr[]={65,21,88,1,45,30,17,73,49,11};
   int size = sizeof(arr) / sizeof(arr[0]);
    Reverse(arr,size);
    printf("\n");
    printf("%d",largest(arr,size));

    return 0;
}