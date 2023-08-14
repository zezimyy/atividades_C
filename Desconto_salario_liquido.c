#include <stdio.h>

int main(void) {
  float salario;
  float inss;
  
  printf("Digite seu salario: ");
  scanf("%f", &salario);

  if (salario < 1693.72){
    printf("Voce tem um desconto de 8%% no inss\n");
    inss = salario * 0.08;
    printf("%.2f", inss);
  } 
  if (salario >= 1693.73 && salario <= 2822.9){
    printf("Voce tem um disconto de 9%% no inss\n");
    inss = salario * 0.09;
    printf("%.2f", inss);
  }
  if (salario >= 2822.91 && salario <= 5646.8){
    printf("Voce tem um desconto de 11%% no inss\n");
    inss = salario * 0.11;
    printf("%.2f", inss);
  }
  if (salario > 5646.81){
    printf("Voce tem um desconto de 621,04 reais no inss\n");
  }
  
  return 0;
}
