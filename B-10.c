//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista B - Questão 10.

/*
10- Cálculo de média móvel:
Desenvolva um programa em C que calcula a média móvel de uma série de números
fornecidos pelo usuário com base em um intervalo especificado. A saída deve ser a média
móvel calculada.
*/

#include <stdio.h>

int main(){
    int qtdNum, i, index = 1;
    float media, soma = 0, numero;

    printf("\n**** LISTA B - QUESTAO 10 ****\n\n");
    printf("Digite quantos numeros quer calcular a media: ");
    scanf("%d", &qtdNum);
    
    i=qtdNum;
    while (i>0)
    {
        printf("Digite o %d* valor: ", index);
        scanf("%f", &numero);
        soma = soma + numero;
        index++;
        i--;
    }
    
    media = soma / (qtdNum * 1.0);
    printf("\n\n**** A media movel dos %d numeros vale: %.2f", qtdNum, media);

    return 0;
}