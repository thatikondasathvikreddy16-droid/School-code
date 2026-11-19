#include<stdio.h>
void pattern(int a){
    for (int i=0;i<a;i++){
      for(int j=0;j<a;j++){
        printf("*");
      }
      printf("\n");
      printf("\n");
    }
}
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}