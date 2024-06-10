//https://www.thehuxley.com/problem/4433?locale=pt_BR

#include <stdio.h>
#include <string.h>

typedef struct Time {
    char nome[50];
    int pontos;
    int vitorias;
    int empates;
    int derrotas;
    int golspro;
    int golscontra;
    int saldo;
} Time;

int main () {

    int quantidade;

    scanf ("%d", &quantidade);

    Time time[quantidade*2];

    //inicializar tudo como 0
    for (int i = 0; i < quantidade * 2; i++) {
        time[i].pontos = 0;
        time[i].vitorias = 0;
        time[i].empates = 0;
        time[i].derrotas = 0;
        time[i].golspro = 0;
        time[i].golscontra = 0;
        time[i].saldo = 0;
    }

    /*a quantidade de times vai ser duas vezes a quantidade de jogos
    entao se forem x jogos, vao ter x*2 times
    depois, so colocar eles em ordem*/
    for (int i = 0; i < quantidade; i++) {
            char inutil;
            int j= i + quantidade;
            scanf(" %s %d %c %d %s", time[i].nome, &time[i].golspro, &inutil, &time[j].golspro, time[j].nome);
            
            //colocando cada estatistica 

            //gols contra e pro
            time[i].golscontra = time[j].golspro;
            time[j].golscontra = time[i].golspro;

            //saldo de gols
            time[i].saldo = time[i].golspro - time[i].golscontra;
            time[j].saldo = time[j].golspro - time[j].golscontra;


            //vitorias e derrotas

            //se o time i ganhar
            if (time[i].golspro > time[j].golspro) {
                time[i].vitorias = 1;
                time[j].derrotas = 1;

                time[i].pontos = 3;
            }
            
            //se o time j ganhar
            else if (time[i].golspro < time[j].golspro) {
                time[j].vitorias = 1;
                time[i].derrotas = 1;

                time[j].pontos = 3;
            }

            //se empatarem
            else if (time[i].golspro == time[j].golspro) {
                time[i].empates = 1;
                time[j].empates = 1;

                time[i].pontos = 1;
                time[j].pontos = 1;
            }
    }

    //agora, ordenar em ordem

    for (int i = 0; i < (quantidade*2) - 1; i++) {
        for (int j = i+1; j < quantidade * 2; j++) {
            
            //se os pontos forem diferentes
            if (time[i].pontos < time[j].pontos) {
                Time aux = time[i];
                time[i] = time[j];
                time[j] = aux;
            } 

            //se os pontos forem iguais 
            else if (time[i].pontos == time[j].pontos) {

                //se as vitorias forem diferentes
                if (time[i].vitorias < time[j].vitorias) {
                    Time aux = time[i];
                    time[i] = time[j];
                    time[j] = aux;
                }

                //se as vitorias forem iguais
                else if (time[i].vitorias == time[j].vitorias){

                    //se o saldo de gol for diferente
                    if (time[i].saldo < time[j].saldo) {
                        Time aux = time[i];
                        time[i] = time[j];
                        time[j] = aux;
                    }

                    //se o saldo de gol for igual
                    else if (time[i].saldo == time[j].saldo) {

                        //se os gols pro forem diferentes
                        if (time[i].golspro < time[j].golspro){
                            Time aux = time[i];
                            time[i] = time[j];
                            time[j] = aux;
                        }

                        //se os gols pro forem iguais
                        else if (time[i].golspro == time[j].golspro) {
                            if (strcmp(time[i].nome, time[j].nome) > 0) {
                                Time aux = time[i];
                                time[i] = time[j];
                                time[j] = aux;
                            }
                        }
                    }
                }
            }
        }
    }

    //agora, printar

    for (int i = 0; i < quantidade * 2; i ++) {
        printf("%d %s %d %d %d %d %d %d %d\n", i+1, time[i].nome, time[i].pontos, time[i].vitorias, time[i].empates, time[i].derrotas, time[i].golspro, time[i].golscontra, time[i].saldo);
    }

    return 0;
}
