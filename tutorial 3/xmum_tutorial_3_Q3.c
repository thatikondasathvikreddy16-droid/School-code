#include<stdio.h>
float getInput(){
    printf("Enter temp in Celcius in between 0 and 100\n");
    float input;
    scanf("%f",&input);
    if ( 100 >= input && input>=0.0){
        return input;
    }
    else{
        printf(" Cant You Read; It said in between 0 and 100 \n");
        return getInput();

    }
}
float C_to_F(float c){
    return (1.8*c)+32;

} 

int main(){
float a= getInput();
  printf("Celcius to Fahrenheit %.4f :",C_to_F(a));
    return 0;
}