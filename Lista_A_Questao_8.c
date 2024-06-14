#include <stdio.h>

int main()
{
    int n;
    printf("Insira um numero: ");   
    scanf("%d",&n);

    printf("Tabuada de multiplicacao do %d:\n", n);

    for(int i = 0; i<=10; i++){
        printf("%d *%d = %d\t", n, i, n*i);
    }
    return 0;
}
