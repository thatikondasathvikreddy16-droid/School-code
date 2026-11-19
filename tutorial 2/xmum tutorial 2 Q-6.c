#include<stdio.h>
int main(){
    int num,i;
    do{
        printf("Enter a number from (1-10)\n");
    scanf("%d",&num);
    switch(num) {
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
            case 10:
                printf("ten\n");
                break;
            default:
                printf("invalid input\n");
                break;
        }
        printf("Again? (1=yes 0=no): ");
        scanf("%d", &i);
    

    }while(i!=0);
    

    return 0;
}