#ifndef TIME_H
#define TIME_H
#include "Jogador.hpp"
// #include "RegistroNBA.hpp"
#include <vector>
using std::vector;
#include <algorithm>

struct Time{
    // nome do time
    string _nome_time;
    // vetor de jogadores
    vector <Jogador> ARRAY_JOGADOR;
    vector <Jogador>::iterator iterador;

    Time(string nome);


    // funçoes
    void adicionar_jogador(string nome, string posicao, int salario);

    void imprimir_lista_jogadores();
    
    void imprimir_folha_salarial_consolidada();
    
};

bool ordena_salario(const Jogador& j1, const Jogador& j2);


#endif