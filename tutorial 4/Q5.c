#include<stdio.h>
int main(){
    char *students[]={"Ally","Bill","Carl","Dora"};
    char *subjects[]={"English","History","Physics"};
    float marks[4][3]={{68.5, 85, 71.3},{92.7, 85.9, 89.8},{88.2, 77.5, 75.9},{71.0, 63.7, 88.5}};
    printf("Average marks(Student):\n");
    for(int i=0;i<4;i++){
        float sum=0;
        for(int j=0;j<3;j++){
            sum+=marks[i][j];
        }
        printf("%s: %.1f\n",students[i],sum/3);
    }
    printf("\nAverage marks(Subject):\n");
    for(int j=0;j<3;j++){
        float sum=0;
        for(int i=0;i<4;i++){
            sum+=marks[i][j];
        }
        printf("%s: %.1f\n",subjects[j],sum/4);
    }
    return 0;
}