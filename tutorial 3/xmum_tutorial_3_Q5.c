#include<stdio.h>
int sum(int n){
    if(n>=1){
        return n+sum(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int user_input;
    printf("Enter a number\n");
    scanf("%d",&user_input);
    printf("sum of all natural number till %d is : %d",user_input,sum(user_input));
    return 0;
}