
#include <stdio.h>
int main()
{
    const float pi=3.142;
int r;
float area,circum;
printf("enter a radius of circle\n");
scanf("%d",&r);
area=pi*r*r; //area of circle
circum=2*pi*r; //circumfrenece of circle
printf("area of circle %g\n",area);
printf("circumference of circle %g\n",circum);
return 0;
}
