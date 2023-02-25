#include <stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your name : ");
    gets(name);
    int count = strlen(name);
    printf("Your name is : %s",name);
    printf("Total No of String %d :",count);

    return 0;
}
