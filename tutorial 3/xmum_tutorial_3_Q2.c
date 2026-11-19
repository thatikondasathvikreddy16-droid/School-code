#include<stdio.h>
float rec_area(float height, float length ){
float area = height*length;
return area;
}
float rec_perimeter (float height, float length){
    float perimeter=2*(height*length);
    return perimeter;
}
int main(){
    printf("Enter height and length\n ");
    float h, l;
    scanf("%f",&h);
    scanf("%f",&l);
    printf("area of rectangle %2f \n",rec_area(h,l) );
    printf("perimeter of rectangle %2f ",rec_perimeter(h,l) );
    return 0;

}