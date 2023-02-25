#include<stdio.h>
/*void main()
{
    int a,b;
    printf("enter 1st no");
    scanf("%d",&a);
    printf("your 1st no is %d\n",a);
    printf("enter 2nd no");
    scanf("%d",&b);
    printf("your 2nd no is %d\n",b);
}
*/
int main()
{
    char name[10],bloodgrp[3],adress[100],age[4];
    printf("enter name ");
    scanf("%s",&name);
    printf("enter age ");
    scanf("%s",&age);
    printf("enter bloodgrp ");
    scanf("%s",&bloodgrp);
    printf("enter adress ");
    scanf("%s",&adress);

    printf("Your name is : %s your blood group is : %s your age is : %s your adress is :%s",name,bloodgrp,age,adress);
    return 0;
}
