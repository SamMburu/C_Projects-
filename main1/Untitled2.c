#include <stdio.h>
#include <stdlib.h>

int xmain()
{
    char firstname[20];
    char crush[20];
    char gender[4];
    int salary;
    int numberofbabies;
    printf("what is your name?\n");
    scanf("%s",firstname);
    printf("who will you marry?\n");
    scanf("%s",crush);
    printf("what is your staus?\n");
    scanf("%s", gender);
    printf("how much are you paid?\n");
    scanf("%d", salary);
    printf("how many kids will you have?\n");
    scanf("%d",numberofbabies);
return 0;
}
