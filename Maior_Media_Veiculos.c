#include <stdio.h>

int main(void) {

  int carros[3];
  int ano = 2017;
  
  printf("Qual a quantidade de carro no 1° ano? ");
  scanf("%d", &carros[0]);
  printf("Qual a quantidade de moto no 1° ano? ");
  scanf("%d", &carros[1]);
  printf("Qual a quantidade de caminhão no 1° ano? ");
  scanf("%d", &carros[2]);

  float media = (carros[0] + carros[2] + carros[1]) / 3;
  int maior_media = media;

  printf("A media de veiculos nos 1° anos foi de: %.2f", media);

    
  printf("\n\nQual a quantidade de carro no 2° ano? ");
  scanf("%d", &carros[0]);
  printf("Qual a quantidade de moto no 2° ano? ");
  scanf("%d", &carros[1]);
  printf("Qual a quantidade de caminhão no 2° ano? ");
  scanf("%d", &carros[2]);

  media = (carros[0] + carros[2] + carros[1]) / 3;
  if(media > maior_media){
      maior_media = media;
      ano+= 1;
  };

  printf("A media de veiculos nos 2° anos foi de: %.2f", media);


  printf("\n\nQual a quantidade de carro no 3° ano? ");
  scanf("%d", &carros[0]);
  printf("Qual a quantidade de moto no 3° ano? ");
  scanf("%d", &carros[1]);
  printf("Qual a quantidade de caminhão no 3° ano? ");
  scanf("%d", &carros[2]);

  media = (carros[0] + carros[2] + carros[1]) / 3;
  if(media > maior_media){
      maior_media = media;
      ano+=1;
  };
  printf("\nA media de veiculos nos 3° anos foi de: %.2f", media);
  printf("\n\nA maior media foi: %.2f", maior_media);
  printf("\nO ano com maior media foi %d", ano);
  return 0;
}
