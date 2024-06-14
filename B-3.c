//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista B - Questão 3.

/*
3- Fibonacci recursivo:
Implemente um programa em C que calcula o termo n da sequência de Fibonacci de forma
recursiva. A entrada deve ser o número n e a saída deve ser o termo correspondente da
sequência.
*/

#include <stdio.h>

int fibonacci(int termo);

int main(){
    int termo, valor;

    printf("**** LISTA B - QUESTAO 3 ****\n\n");
    printf("Qual termo da sequencia Fibonacci voce gostaria de conhecer? ");
    scanf("%d", &termo);

    valor = fibonacci(termo);
    
    printf("o termo %d vale: %d", termo, valor);
    return 0;
}

int fibonacci(int termo){
    int valor;
    
    // bases
    if(termo <= 1){
        return 0;
    }
    
    if(termo == 2){
        return 1;
    }
    
    // parte recursiva
    valor = fibonacci(termo-1) + fibonacci(termo-2); 

    return valor;
}
