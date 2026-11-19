#include<stdio.h>
#include<stdbool.h>
int main(){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    char *month_name[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    while (true)
    {
        printf("Enter month number (1-12) or 0 to exit: ");
        int month_num;
        scanf("%d",&month_num);
        if (month_num>=0 && month_num<=12)
        {
            if (month_num==0)
            {
                break;
            }
            printf("%s has %d days.\n",month_name[month_num-1],month[month_num-1]);
        }
        else
        {
            printf("Invalid month number. Please try again.\n");
        }
        
    }
    
    return 0;
}