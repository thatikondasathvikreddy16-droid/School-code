#include<stdio.h>
int main(){
    int num1 , num2;
    printf("enter 2 numbers :\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1>num2){
        printf("%d is greater than %d", num1, num2);
    }
    else if(num1<num2){
        printf("%dis less then %d" ,num1,num2);

    }
    else{
        printf("%dis equal to %d",num1 , num2);
    }
    return 0;

}