#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter 1st no");
    scanf("%d",&a);
    printf("enter 2nd no");
    scanf("%d",&b);
    printf("enter 3rd no");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is gretest",a);
        }
        else{
            printf("%d is gretest",c);

        }
        
    }
    else{
        if (b>c)
        {
            printf("%d is gretest",b);
            
        }
        else{
            printf("%d is gretest",c);

        }
        
    }
    
    
    return 0;
}
