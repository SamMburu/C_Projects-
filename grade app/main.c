#include <stdio.h>
#include <stdlib.h>

int main()
{
 int  grade1;
 int grade2;
int grade3;
 int total;
 float average;
 printf("enter 3 grades\n");
 scanf("%d", &grade1);
 scanf("%d", &grade2);
 scanf("%d", &grade3);

printf("%d\n", grade1);
printf("%d\n", grade2);
printf("%d\n", grade3);


total= grade1 + grade2 + grade3;
  printf("%d\n", total);

 average= total/3;
 printf("%.2f\n", average);

if (average>=30)
{
    printf("pass");
}
else{
    printf("fail");
}
    return 0;
}
