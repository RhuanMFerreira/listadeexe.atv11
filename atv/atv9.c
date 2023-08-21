#include<stdio.h>

main(){

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e escrever o valor do novo salário.

    float salarioAtual, porcentagem, porcetagemReajuste, novoSalario;

    printf("Digite o salario atual");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de reajuste");
    scanf("%f", &porcentagem);

    porcetagemReajuste = porcentagem/100;

    novoSalario = (salarioAtual * porcetagemReajuste) + salarioAtual;

    printf("Novo salario: R$%.2f", novoSalario);




}