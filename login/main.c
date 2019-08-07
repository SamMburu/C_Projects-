#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char username[20];
   char password[20];
   printf("enter username: ");
   scanf("%s",&username);
   printf("\n enter password");
   scanf("%s",&password);
   if(strcmp (username , "sam")==0)
      {
        if(strcmp(password , "123")==0)
           {
               printf("\n welcome login successful");
           }
      }




    return 0;
}
