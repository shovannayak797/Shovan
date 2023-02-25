#include <stdio.h>
#include<string.h>
int main()
{
    char name[]="shovan123";
    char password[]="password";
    char username[30];
    char pass[30];
    printf("Enter your username : \n");
    scanf("%s",&username);
    printf("Enter your password :\n");
    scanf("%s",&pass);
    int result = strcmp(name,username);
    int pass_result = strcmp(password,pass);
    if (result==0 && pass_result==0)
    {
        printf("Welcome %s",username);
    } else{
        printf("wrong user name or password");
    }

    return 0;
}