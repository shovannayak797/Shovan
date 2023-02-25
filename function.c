/*#include<stdio.h>
int main(){
int a;
printf("enter 1st No\n");
scanf("%d",&a);

printf("%d",squareOf(a));
return 0;
}

int squareOf(int a ){
    return a*a;
}*/





/*#include<stdio.h>
int main(){
    int r;
    printf("Enter radious");
    scanf("%d",&r);
    printf("%d",areaOfCircle(r));
    return 0;
}

int areaOfCircle(int a){
    return 3.14*a*a;
}*/
#include<stdio.h>

int average(float x,float y,float z){
    return (x+y+z)/3;
}

int main(){
    printf("%d",average(2,3,4));
    return 0;
}

