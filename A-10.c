//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista A - Questão 10.

/*
10- Calculadora simples:
Crie um programa em C que simula uma calculadora simples. Ele deve ser capaz de
realizar operações de adição, subtração, multiplicação e divisão com dois números
fornecidos pelo usuário. A saída deve ser o resultado da operação escolhida
*/

#include <stdio.h>

int adicao(int a, int b);
int subtracao(int a, int b);
int multiplicacao(int a, int b);
float divisao(int a, int b);

int main(){
    
    int a, b, resultado, opcao;
    float div;
    int continuar = 0;

    printf("**** LISTA A - QUESTAO 10 ****\n");
    
    do{
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n**Escolha a operacao inserindo um dos seguintes numeros**\n[1- soma]\n[2- subtracao]\n[3- multiplicacao]\n[4- divisao]\nDigite: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        resultado = adicao(a, b);
        break;
    case 2:
        resultado = subtracao(a, b);
        break;
    case 3:
        resultado = multiplicacao(a, b);
        break;
    case 4:
        while (b==0){
        printf("Por favor, insira um divisor diferente de zero: ");
        scanf("%d", &b);
        }
        div = divisao(a, b);
        break;
    default:
        return 1;
    }

    if(opcao == 4){
        printf("\n*** o resultado dessa operacao e': %.2f", div);
    } else{
        printf("\n*** o resultado dessa operacao e': %d", resultado);
    }

    printf("\n\ndeseja fazer outra operacao?\n[1- SIM]\n[0- NAO]\ndigite: ");
    scanf("%d", &continuar);
    }while(continuar);

    printf("\n\n*** Obrigada por usar nossa calculadora! ***");
    return 0;
}

int adicao(int a, int b){
    int resultado =  a + b;
    return resultado;
}

int subtracao(int a, int b){
    int resultado =  a - b;
    return resultado;
}

int multiplicacao(int a, int b){
    int resultado = a * b;
    return resultado;
}

float divisao(int a, int b){
    float div = a / (b * 1.0);
    return div;
}