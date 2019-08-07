#include<stdio.h>

int emain()
{
    char a;

    printf("enter your choice (1,2,3): ");
    scanf("%c",&a);
    switch(a)
    {
    case '1':
        printf("this is excellent!");
        break;
    case '2':
        printf("almost the right choice");
        break;
    case '3':
        printf("nice attempt!");
        break;
    default:
        printf("invlaid choice!");

    }
}
