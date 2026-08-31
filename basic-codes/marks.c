#include <stdio.h>
void main()
{
    float a=0,b=0,c=0,d=0,e=0,sum=0,per=0;
    printf("Enter marks of 5 subject");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=(sum/500)*100;
    printf("\ntotal marks=%f",sum);
    printf("\ntotal percentage=%f",per);
}