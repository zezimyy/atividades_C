#include <stdio.h>

int main(void) {

  int num, maior = 0;
  int qtd = 0;
  int min;

  while (qtd < 20){
    
    printf("digite um numero: ");
    scanf("%d", &num);
    
    if(num > maior){maior = num;}

    if(qtd == 0){ min = num; }
  
    if(num < min){ min = num; }
    qtd++;
    
    }
  printf("\nValor max: %d", maior);
  printf("\nvalor min: %d", min);
  return 0;
}
