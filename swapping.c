//Swapping using 3rd variable
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5,b=10;
    int temp;
    printf("\nvalue of a is%d \n ",a);
    printf("\nvalue of a is %d \n",b);
    temp=a;
    a=b;
    b=temp;
    printf(" \nNew value of a is%d \n ",a);
    printf("\nNew value of a is%d \n ",b);
    
    return 0;
}*/


//SWAPPING WITHOUT 3RD VARIABLE
#include<stdio.h>
int main(int argc, char const *argv[])
{
   int a=5,b=10;
   a=a+b;
   b=a-b;
   a=a-b;
    printf("\nvalue of a is%d \n ",a);
    printf("\nvalue of a is%d \n ",b);
    
    return 0;
}

