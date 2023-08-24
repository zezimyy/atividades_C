#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  int N, bin, bits;

  printf("digite um numero: ");
  scanf("%d", &N);

  printf("\nQuantos bits quer: ");
  scanf("%d", &bits);

  while (i < bits){
    
    bin = N%2;
    printf("\n%d", bin);
    N = N/2;
    i++;
  }

  if (N==1){
    printf("\n\nO numero não pode ser representado em %d", bits);
  }
  else
  {
    printf("\n\nRepresentação bem sucedida");
    printf("\n\nO numero deve ser lido de baixo para cima");
  }

  return 0;
}
