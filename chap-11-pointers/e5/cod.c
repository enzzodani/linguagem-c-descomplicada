/*Crie um programa que contenha um array de inteiros com cinco elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido
 */
#include <stdio.h>

void dobraArray(int *v, int n){
  int *ponteiro = v; //apontando o ponteiro para o primeiro elemento do array
  for (int i = 0;i<n;i++) {
    int elemento = (*ponteiro) * 2; //elemento vai ser igual ao conteudo apontado pelo ponteiro * 2
    printf("%d\n", elemento);
    ponteiro++; //aritmetica de ponteiro
  }
}

void recebeArray(int *v, int n){
  int *ponteiro = v;  
    for(int i = 0; i < n; i++){
      printf("Escreva o elemento %d do array: ", i+1);
        scanf("%d", ponteiro);
    ponteiro++;
    printf("\n");
    }   
}

int main(int argc, char *argv[])
{

  int array[5];
  int tamanho = sizeof(array)/sizeof(array[0]); //calcula o tamanho do array
  
  recebeArray(array, tamanho);
  dobraArray(array, tamanho);


  return 0;
}
