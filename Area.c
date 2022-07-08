/*Question - Write a program to calculate the area of triangle using formula at=√s(s-
a)(s-b)(s-c)           */

#include <stdio.h>
#include <math.h>

void main()
{
 float at,a,b,c,s;
 printf("Enter three sides of triangles");
  printf("\n");
 scanf("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 printf("s is %f",s);
 at=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("\n");
 printf("area of triangle is %f",at);
}
