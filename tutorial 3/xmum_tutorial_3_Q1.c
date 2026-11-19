#include<stdio.h>
int countEven(int n){
    int count=0;
    for (int i; i<=n;i=i+2){
        count++;

    }
   return count;
}

int main(){
    int user_input;
    printf("Enter a integer \n");
    scanf("%d",&user_input);
    printf(" number of Even Number from : %d\n", countEven(user_input));
    ;
    return 0;

}