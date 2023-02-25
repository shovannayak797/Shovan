/*#include<stdio.h>
//#include<string.h>
int main()
{
   // char name[]={'s','u','s','a','n','t','a'};
   char name[]={"susanta"};
    printf("%s",name);
    return 0;
}*/


/*#include <stdio.h>
#include<string.h>
int main()
{
    char name[100];
    printf("Enter your name : ");
    gets(name);
    printf("Your name is : %s",name);

    return 0;
}*/


#include <stdio.h>
#include<string.h>
int main()
{
    char username[20];
    char password[20];
    printf("Enter your username : \n");
    //scanf("%s",&username);
    gets(username);
    printf("Your username is : %s\n",username);
    printf("Enter your password :\n");
    //scanf("%s",&password);
    gets(password);
    printf("Your password is :%s\n",password);

    return 0;
}

