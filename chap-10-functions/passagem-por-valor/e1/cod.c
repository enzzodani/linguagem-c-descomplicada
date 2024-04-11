#include <stdio.h>

float maior_num(float a, float b) {

  if (a > b) {
    return a;
  }
  else if (b > a){
    return b;
  }
  else {
    printf("The numbers are equal.\n");
    return 0;
  }
}


int main(){

  float a,b;
  
  //Colect
  printf("Write the first number:\n");
    scanf("%f", &a);
  printf("Write the second number:\n");
    scanf("%f", &b);

  float maior = maior_num(a,b);
  if(maior!=0) { 
    printf("The greatest number is: %.f\n", maior);
  }

  return 0;
}

