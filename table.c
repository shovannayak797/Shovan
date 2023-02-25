/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,a;
    printf("enter no :");
    scanf("%d",&n);
    printf("enter no you want till multiply");
    scanf("%d",&a);
    for ( i = 0; i <=a ; i++)
    {
       printf("%d*%d=%d\n",i,n,n*i);
    }
    
    return 0;
}*/
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,s;
    printf("enter number");
    scanf("%d",&n);
        s=(n*(n+1))/2;
        
        printf("%d",s);
    
    return 0;
}*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    while (n>5)   
    {
        printf("%d\n",n);
        n++;
    }
    
    return 0;
}


