#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter age ");
    scanf("%d",&age);
    if (age<13)
    {
       printf("childhood");
    }
    else if (age>=13 && age<=19)
    {
        printf("teenage");
    }
    else if(age>=19 && age<=40)
        printf("adult hood");
    else{
        printf("old age");
    }
    
    
        return 0;
}
