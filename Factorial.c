/*#include<stdio.h>
int fact(int a){
    if (a==0 || a==1)
    {
        return 1;
    }
    else{
        return a*fact(a-1);
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
  printf("enter your number");
  scanf("%d",&n);
  printf("%d",fact(n));
    return 0;
}*/
#include<stdio.h>
int addTwoNo(int n){
return n*(n+1)/2;
}

int main(int argc, char const *argv[])
{
    int a;
    printf("enter your number");
    scanf("%d",&a);
    printf("%d", addTwoNo(a));
    return 0;
}

/*

#include <stdio.h>

int main()
{
    int n,fact=1;
    printf("Enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}


*/

