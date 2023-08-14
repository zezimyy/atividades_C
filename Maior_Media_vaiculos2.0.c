#include <stdio.h>

int main(void) {

  int carros[3];
  int ano = 2017;
  int loop = 1;
  float media = (carros[0] + carros[2] + carros[1]) / 3;
  int maior_media = media;
  int loop_ano = 1;

  while(loop < 4){

  printf("\nQual a quantidade de carro no %d° ano? ", loop_ano);
  scanf("%d", &carros[0]);
  printf("Qual a quantidade de moto no %d° ano? ", loop_ano);
  scanf("%d", &carros[1]);
  printf("Qual a quantidade de caminhão no %d° ano? ", loop_ano);
  scanf("%d", &carros[2]);

  media = (carros[0] + carros[2] + carros[1]) / 3;
  maior_media = media;

  printf("\nA media de veiculos nos %d° anos foi de: %.2f", loop_ano, media);

  if(media > maior_media){
    maior_media = media;
  };
  loop+=1;
  loop_ano+=1;
  ano+= 1;
  }

  printf("\n\nA maior media foi: %.2d", maior_media);
  printf("\nO ano com maior media foi %d", ano);
  return 0;
}
