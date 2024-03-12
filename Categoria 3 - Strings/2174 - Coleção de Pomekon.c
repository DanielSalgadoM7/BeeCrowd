/*Desde que foi lançado oficialmente o Pomekon no Brasil, Dabriel está tentando realizar seu maior sonho: Ser um Mestre Pomekon. Sua meta é conquistar os 151 Pomekons disponíveis. 
Ele já conseguiu capturar muitos monstrinhos, porém em sua cidade aparecem muitos Pomekons repetidos, fazendo com que ele capture diversas vezes o mesmo Pomekon.

Vendo que sua mochila está bem cheia, Dabriel pediu para que você fizesse um programa de computador que informasse a ele quantos Pomekons faltam para completar a coleção.

Entrada
A primeira linha do caso de teste consiste de um inteiro N (1 ≤ N ≤ 10³), representando a quantidade de Pomekons que Dabriel já capturou.
As próximas N linhas consistem de uma string S (1 ≤ |S| ≤ 10³), representando o nome de cada Pomekons. O nome de cada Pomekons consiste apenas de letras maiúsculas e minúsculas.

Saída
Você deverá imprimir: "Falta(m) X pomekon(s).", onde X representa a quantidade Pomekons não capturados.*/

#include <stdio.h>
#include <string.h>

int main() {
    int valorN, count = 0;
    scanf("%d", &valorN);
    getchar(); // Limpa o buffer de entrada

    char pomekons[1000][1000]; // Array bidimensional para armazenar os nomes dos Pomekons

    // Leitura dos nomes dos Pomekons
    for (int i = 0; i < valorN; i++) {
        scanf(" %[^\n]", pomekons[i]);
    }

    // Comparação dos nomes dos Pomekons para encontrar os repetidos
    for (int i = 0; i < valorN; i++) {
        for (int j = i + 1; j < valorN; j++) {
            if (strcmp(pomekons[i], pomekons[j]) == 0) {
                count++; // Incrementa o contador se encontrar um Pomekon repetido
                break; // Interrompe a busca para evitar contar o mesmo Pomekon repetido várias vezes
            }
        }
    }

    // Calcula quantos Pomekons estão faltando para completar a coleção
    int pomekons_faltando = 151 - (n - count);

    printf("Falta(m) %d pomekon(s).\n", pomekons_faltando);

    return 0;
}
