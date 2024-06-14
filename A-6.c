//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista A - Questão 6.

/*
6- Verificador de palíndromo:
Crie um programa em C que verifica se uma palavra fornecida pelo usuário é um
palíndromo ou não. A saída deve indicar se a palavra é um palíndromo ou não.
*/

#include <stdio.h>

int descobrirTamanho(char palavra[]);
int comparar(char palavra[], int tamanho);
void mostrarResultado(int palindromo);

int main(){
    char palavra[100];
    int tamanho, palindromo;

    printf("\n\n**** LISTA A - QUESTAO 6 ****\n");
    printf("insira uma palavra: ");
    scanf("%s", palavra);

    tamanho = descobrirTamanho(palavra);
    palindromo = comparar(palavra, tamanho);
    mostrarResultado(palindromo);

}

int descobrirTamanho(char palavra[]){
    int i = 0;
    while(palavra[i]!='\0'){
        i++;
    }
    return i;
}

int comparar(char palavra[], int tamanho){
    for(int i=0; i < tamanho/2; i++){
        if(palavra[i]!=palavra[tamanho-1-i]){
            return 0;
        }
    }
    return 1;
}

void mostrarResultado(int palindromo) {
    if(palindromo){
        printf("sim, essa palavra e' um palindromo!\n");
    } else printf ("que pena, essa palavra nao e' um palindromo :(\n");
}