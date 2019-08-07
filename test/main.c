#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a;
    printf("type an integer: ");
    scanf("%d", &a);
    if(a<20)
    {
        printf("you typed %d.\n",a);
        printf("%d is greater than 20.\n",a);
    }
    else
    {
        printf("%d is less than or equal to 20.\n",a);
    }
    return 0;
}
