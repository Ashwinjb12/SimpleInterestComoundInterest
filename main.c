#include <stdio.h>
#include <math.h>
float simpleinterest(float principal,float rate,int time);
float compoundinterest(float principal,float rate,int time);
int main()
{
    float principal,rate,si,ci;
    int time;
   /* printf("Enter principal:");
    scanf("%f",&principal);
    printf("Enter rate:");
    scanf("%f",&rate);
    printf("Enter  time:");
    scanf("%f",&time);
    si=(principal * time * rate)/ 100;
    printf("Simple Interest = %f",si);*/
    si=simpleinterest (1000.0,10.0,5);
    printf("Simple Interest = %f",si);
    ci=compoundinterest (1000.0,10.0,5);
    printf("Compound Interest = %f",ci);
    return 0;
}
float simpleinterest(float principal,float rate,int time){
    float si=(principal * time * rate)/ 100;
    return si;
}
float compoundinterest(float principal,float rate,int time){
    float x=pow((1+(rate/100)),time);
    float b=principal *(x);
    return b;
}