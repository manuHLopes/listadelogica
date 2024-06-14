//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista B - Questão 8.

/*
8- Verificador de número Armstrong:
Crie um programa em C que verifica se um número fornecido pelo usuário é um número de
Armstrong ou não. A saída deve indicar se o número é um número de Armstrong ou não.
*/

#include <stdio.h>

//declarando as funções
int converteStringParaInt(char numero[20]);
int juntaNaBase(int base, int digito[20], int ultimoDigitoIndice);
int comparaSoma(int soma, int numero);
int somaDigitos(char numero[]);


int main(){
    char numEntrada[20];
    int numeroConvertido, soma, armstrong = 0;
    
    printf("**** LISTA B - QUESTAO 8 ****\n");
    printf("Digite um numero:");
    scanf("%s", numEntrada);
    
    numeroConvertido = converteStringParaInt(numEntrada);
    soma = somaDigitos(numEntrada);
    armstrong = comparaSoma(soma, numeroConvertido);

    if(armstrong){
        printf("Esse e' um numero Armstrong!");
    } else {
        printf("Esse nao e' um numero Armstrong!");
    }

    return 0;
}

int converteStringParaInt(char numero[20]){
    int digito[20], numConvertido = 0, i = 0, ultimoDigitoIndice;
    
    //converte digito por digito
    //descobre o tamanho da string e salva em 'i'
    while(numero[i] != '\0'){
        digito[i] = numero[i] - 48;
        i++;
    }

    ultimoDigitoIndice = i-1;
    numConvertido = juntaNaBase(10, digito, ultimoDigitoIndice);
    
    return numConvertido;
}

//essa função pode ser reutilizada na conversão de hexadecimais ;D
int juntaNaBase(int base, int digito[20], int ultimoDigitoIndice){
    int i = ultimoDigitoIndice, numConvertido = 0, baseRef = base;
    while (i >= 0){       
        if(i == ultimoDigitoIndice){
            base = 1;
        } else {
            base *= baseRef;
        }
        numConvertido += digito[i]*base;
        i--;
    }
    return numConvertido;
}

int comparaSoma(int soma, int numero){
    if (soma == numero){
        return 1;
    } else {
        return 0;
    }
}

int somaDigitos(char numero[]){
    int digito[20], i=0, soma=0, cubo = 1;

    while(numero[i] != '\0'){
        digito[i] = numero[i] - 48;
        for (int j=0; j < 3; j++){
            cubo *= digito[i];
        }
        soma += cubo;
        i++;
        cubo = 1;
    }

    return soma;
}