#include<stdio.h>
int main(){ 
    float f, c; 
    printf("Enter temperaturein °F\n");
    scanf("%f",&f);
    c = (f-32) / 180 * 100; 
    printf("The temperature in °C is %f", c); 
    return 0;
    }