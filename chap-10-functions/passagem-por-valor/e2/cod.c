//Faça uma função que receba 1 int de 1 a 12 e imprima na tela o mês e sua quantidade de dias de acordo com o número digitado pelo usuário

#include <stdio.h>

void mes(int m){
  
  switch(m){
    case(1):
    printf("January- 31\n");
    break;
    case(2):
    printf("February - 28\n");
    break;
    case(3):
    printf("March - 31\n");
    break;
    case(4):
    printf("April - 30\n");
    break;
    case(5):
    printf("May - 31\n");
    break;
    case(6):
    printf("June - 30\n");
    break;
    case(7):
    printf("July - 31\n");
    break;
    case(8):
    printf("August - 31\n");
    break;
    case(9):
    printf("September - 30\n");
    break;
    case(10):
    printf("October - 31\n");
    break;
    case(11):
    printf("November - 30\n");
    break;
    case(12):
    printf("December - 31\n");
    break;
    default:
  } 
}

int main(){

  int m;

  //Colect
  printf("Write a number to return a month: \n");
    scanf("%d",&m);

  if(m > 0 && m<13) {  
    mes(m);
    return 0;
  }

  printf("Please, write a number between 1 and 12\n");
  return 0;
}
