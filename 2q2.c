#include<stdio.h>
int main(){
    float height , weight ;
    printf("enter your height in meter: \n ");
    scanf("%f",&height);
    printf("enter your weight in kg:  \n ");
    scanf("%f",&weight);
    float bmi =weight/(height*height);
    if(18.0>=bmi){
        printf("'under weight' your bmi : %f ", bmi);

    }
    else if (bmi>=25.0){
        printf("'over weight' your bmi : %f ", bmi);
    }
    else{
        printf("'perfect condition' your bmi : %f ", bmi);
    }
    return 0;
}