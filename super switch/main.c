# include <stdio.h>

int main() {
  /* code */
char i;

printf("\t******Welcome to Bold Hotel*********\n");
printf("______________________________________________________________\n" );

printf("\t~~~~~~Select A meal Of your Choice~~~~~~\n" );
printf("1) Snacks\n" );
printf("2) Food\n" );
printf("3) Drinks\n" );

printf("Make a selection : " );

scanf("%s",&i);
switch(i)
    {
    case '1':
        printf("snacks!");
        break;
    case '2':
        printf("food");
        break;
    case '3':
        printf("drinks!");
        break;
    default:
        printf("invlaid choice!");




 }

  return 0;
}


