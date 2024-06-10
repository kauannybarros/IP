//https://www.thehuxley.com/problem/4436?locale=pt_BR

#include <stdio.h>
#include <string.h>

typedef struct Produto {
    int quantidade; 
    char nome [50];
    float valor;
}Produto;

int main () {
    int numprodutos;
    float ValorTotal = 0.0;

    scanf ("%d", &numprodutos);

    Produto produtos[numprodutos];

    //ler cada produto

    for (int i=0; i < numprodutos; i++) {
        //ordem de leitura: nome, valor, unidades
        scanf(" %s", produtos[i].nome);
        scanf("%f", &produtos[i].valor);
        scanf("%d", &produtos[i].quantidade);

        ValorTotal += (produtos[i].valor * produtos[i].quantidade);
    }

    //ordenar em ordem alfabetica

    for(int i = 0; i < numprodutos-1; i++) {
        for (int j=i+1; j < numprodutos; j++) {
            if(strcmp(produtos[i].nome, produtos[j].nome) > 0) {
                Produto aux = produtos[i];
                produtos[i] = produtos[j];
                produtos[j] = aux;
            }
        }
    }
    

    //ler quando ela foi no mercado 
    //"Luisa foi ao mercado no dia xx/xx"

    char data[6];
    char inutil[29];
    
    //ler ate "dia";
    scanf(" %28[^\n]", inutil);
    //pegar somente a data
    scanf(" %s", data);

    //ler quanto ela levou
    
    char inutil_2[7];
    float dinheiro;

    //vai ler ate o $ e dps vai ler oq tiver dps do $ pra dentro do dinheiro
    scanf(" %[^$] $%f", inutil_2, &dinheiro);


    /*Formato da nota fiscal montada
    =============

    NF - 0123 
    Data - XX/XX

    =============
    QTDx NomeProduto - R$XX.XX

    Valor Total - R$XX.XX
    Pago - R$XX.XX
    Troco - R$XX.XX
    =============  */

    printf("=============\n");
    printf("NF - 0123\n");
    printf("Data - %s\n", data);
    printf("=============\n");


    //imprimir cada produto
    for (int i = 0; i < numprodutos; i++) {
        printf("%dx %s - R$%.2f\n", produtos[i].quantidade, produtos[i].nome, (produtos[i].valor * produtos[i].quantidade));

    }

    printf("\nValor Total - R$%.2f\n", ValorTotal);
    printf("Pago - R$%.0f\n", dinheiro);

    float troco = dinheiro - ValorTotal;

    printf("Troco - R$%.2f\n", troco);
    printf("=============");

    return 0;
}