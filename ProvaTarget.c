#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
// Atividade 1
int main()
{
    int INDICE = 13, soma = 0, k = 0;

    while (k < INDICE)
    {
        k = k + 1;
        soma = soma + k;
    }

    printf("%d", soma);

    // resultado foi igual a 91
    return 0;
}*/

// ###############################################################

// Atividade 2
/*
int main(void)
{
    int n;
    int verificador = 0;
    int ant = 0, atual = 1, prox = 0;
    printf("Digite um numero:\n");
    scanf("%d", &n);

    for (int i = 0; prox < n + 1; i++)
    {

        prox = ant + atual;
        ant = atual;
        atual = prox;
        printf("%d  ", ant);
        if (prox == n)
        {
            verificador = 1;
        }
    }
    if (verificador == 1)
    {
        printf("\nO numero informado pertence a sequencia\n");
    }
    else
    {
        printf("\nO numero informado nao pertence a sequencia");
    }

    return 0;
}*/

// Atividade 5
int main(void)
{
    int tamanho = 0, j = 0;
    char Palavra[100];
    char PalavraContrario[100];
    printf("Digite uma palavra: \n");
    scanf("%s", Palavra);
    tamanho = strlen(Palavra);
    j = strlen(Palavra) - 1;
    for (int i = 0; i < tamanho; i++)
    {   
        PalavraContrario[i] = Palavra[j];
        j--;
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf ("%c", PalavraContrario[i]);
    }
    printf("\n");
    
    return 0;
}