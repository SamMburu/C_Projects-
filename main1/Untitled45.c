#include <stdio.h>

int xmain()
{
    float grade1;
    float grade2;
    float grade3;
    printf("enter your 3 grades\n");
    scanf("%f", &grade1);
    scanf("%f", &grade2);
    scanf("%f", &grade3);
    float average= (grade1 + grade2 +grade3) /3;
    printf("the result is %f\n", average);
    if(average>=90)
    {
        printf("distinction");
    }
    else if(average>=70)
    {
        printf("credit");
    }
    else if(average>=50)
    {
        printf("pass");
    }
    else(average<50)
    {
        printf("fail");
    }

    return 0;
}
