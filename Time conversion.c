#include<stdio.h>

int main()
{
    int hr,mn,session;
    printf("enter Time");
    scanf("%d : %d",&hr,&mn);
    if(hr<=12){
        printf("time is %d : %d AM",hr,mn);
    }
    else{
        hr=hr-12;
        printf("time is %d : %d PM",hr,mn);
    }

    return 0;
}
