#include <stdio.h>

int main(void) {

  float salarioBruto;
  float valorPorHora;
  float imposto;
  float salarioLiquido;
  float horasTrabalhadas;

  printf("\nQuantas horas foram trabalhadas? ");
  scanf("%f", &horasTrabalhadas);

  valorPorHora = 0.1 * 1300;
  salarioBruto = horasTrabalhadas * valorPorHora;
  imposto = salarioBruto * 0.03;
  salarioLiquido = salarioBruto - imposto;
  
  printf("salario liquido: %f", salarioLiquido);
  
  return 0;
}
