#include<stdio.h>
int main(){
    char grade[2];
    printf("enter a your Grade 'A' 'B' 'C' 'F'\n");
    scanf(" %c",&grade[0]);
    if(grade[0]=='A'){
        printf("average");

    }
    else if(grade[0]=='B'){
        printf("Below average");

    }else if(grade[0]=='C'){
        printf("Don't know why are pass but your pass");

    }else if(grade[0]=='F'){
        printf("Failure ");

    }
    else{
        printf("enter your grade in captail letter");
    }

}