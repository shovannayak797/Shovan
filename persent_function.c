#include<stdio.h>
int percent(int a,int b){
    int p = (a/b)*100;
    return p;
}
int main()
{
    printf("%d",percent(2,10));
    return 0;
}
