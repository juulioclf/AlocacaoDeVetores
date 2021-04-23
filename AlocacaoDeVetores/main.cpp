#include <stdio.h>
#include <stdlib.h>


//funcao que aloca o vetor:
int* alocaVetor(int tamanho){

    int *aux;
    aux = (int*) malloc(tamanho * sizeof(int));

    return aux;
}

//funcao que imprime o vetor:
void imprimeVetor(int *vetor, int tamanho){

    for(int i = 0; i < tamanho; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}


int main(){

    int *vetor, tamanho;

    //lendo o valor do tamanho, fornecido pelo usuario:
    printf("digite o tamanho do seu vetor: ");
    scanf("%d", &tamanho);

    //alocando o vetor dado o tamanho do usuario:
    vetor = alocaVetor(tamanho);


    //lendo valores do usuario para o vetor
    for(int i = 0; i < tamanho; i++){
        printf("digite o numero do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    //imprimindo o vetor:
    imprimeVetor(vetor, tamanho);


    return 0;
}
