#include<stdio.h>
int main(){
    int item , discount ;
    printf("enter item purchased\n");
    scanf("%d",&item);
    if (item<=5){
        discount=0;
    }
    else if (item>5&&item<11){
      discount = 10;
    }
    else {
        discount = 20;

    }
    printf("%d items bought so %d %% discount", item, discount);

    

    return 0;
}