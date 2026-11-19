#include <stdio.h>
int main()
{
    char name[]="";
    printf("Enter your name: \n");
    scanf("%s",&name); 
    int length = sizeof(name) / sizeof(name[0]);
    for(int i=length-1; i>=0; i--)
    {
        printf("%c", name[i]);
    }

 
    return 0;
}