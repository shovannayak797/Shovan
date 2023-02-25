#include<stdio.h>
int main()
{
    int pi=3.14,r,a,p;
    printf("enter radius r:");
    scanf("%d",&r);
    a=pi*r*r;
    printf("the area is %d",a);
    p=2*pi*r;
    printf("the perimeter is %d",p);
    return 0;

}