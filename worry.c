#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ans , ans2;
    printf("Are you Worried ?");
    scanf("%c",&ans);
    switch (ans)
    {
    case 'y':
       printf("can you do anything ?");
       scanf("%c",&ans2);
       switch (ans2)
       {
       case 'y':
        printf("why to worry ?");
        break;
        case 'n':
        printf("why to worry ?");

       default:
       printf("invalid input");
       }
        break;
    case 'n':
    printf("why to worry ?");
    default:
    printf("Invalid input");
        
    }
    return 0;
}
