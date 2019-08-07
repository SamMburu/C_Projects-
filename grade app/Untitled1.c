include <stdio.h>
#include <stdlib.h>

float averages(float x, float y,float z);
float total;
float average;
float grade1;
float grade2;
float grade3;

float main(){
  printf("Ënter x: ");
  scanf("%f", &grade1);
  printf("Ënter y: ");
  scanf("%f", &grade2);
  printf("Ënter z: ");
  scanf("%f", &grade3);

  return averages(grade1, grade2, grade3);
}

float averages(float x, float y,float z){
  total = x + y + z;
  average = total/3;
  return average;
}
