//Alunos: Manuela Henrique Lopes & Williams Ferreira
//Prova de Lógica: Lista A - Questão 9.

/*
9- Ordenação de números:
Implemente um programa em C que ordena três números fornecidos pelo usuário em ordem
crescente. A saída deve ser os números ordenados.
*/

#include <stdio.h>

void pedeNumeros(int*, int*, int*);
void ordenaNumeros(int*, int*, int*);
void imprimeNumeros(int, int, int);
void copiaLista(int*, int*, int*, int*);

int main(){
    int n1, n2, n3;
    pedeNumeros(&n1, &n2, &n3);
    ordenaNumeros(&n1, &n2, &n3);
    imprimeNumeros(n1, n2, n3);
    return 0;
}

void pedeNumeros(int* a, int* b, int* c){
    int lista[3];
    for(int i=0; i<3; i++){
        printf("digite o numero %c: ", 65+i);
        scanf("%d", &lista[i]);
    }
    copiaLista(a, b, c, lista);
}

void ordenaNumeros(int* a, int* b, int* c){
    int lista[3];
    //a é o menor número
    if (*a<*b && *a<*c){
        lista[0]=*a;
        if(*b<*c){
            lista[1]=*b;
            lista[2]=*c;
        }else {
            lista[1]=*c;
            lista[2]=*b;
        }
    } 
    //a é o número do meio
    else if((*b<*a && *a<*c)||(*c<*a && *a<*b)){
        lista[1]=*a;
        if(*b<*c){
            lista[0]=*b;
            lista[2]=*c;
        } else {
            lista[0]=*c;
            lista[2]=*b;
        }
    } 
    //a é o ultimo número
    else {
        lista[2]=*a;
        if(*b<*c){
            lista[0]=*b;
            lista[1]=*c;
        }else{
            lista[0]=*c;
            lista[1]=*b;
        }
    }
    copiaLista(a, b, c, lista);
}

void imprimeNumeros(int a, int b, int c){
    printf("\n*** os numeros ordenados sao: %d %d %d", a, b, c);
}

void copiaLista(int* a, int* b, int* c, int lista[]){
    *a = lista[0]; 
    *b = lista[1]; 
    *c = lista[2];
}