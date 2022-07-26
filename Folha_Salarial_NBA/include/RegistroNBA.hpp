#ifndef REGISTRO_H
#define REGISTRO_H
#include "Time.hpp"
#include <map>
using std::map;
using std::pair;

struct RegistroNBA{

    vector<Time> ARRAY_DE_TIMES;
    vector <Time>::iterator iterador_times;
    
    void adicionar_time(string nome_time);
    void adicionar_jogador(string nome_time, string nome_jogador, string posicao, int salario);
    void imprimir_lista_jogadores_time(string nome_time);
    void imprimir_folha_consolidada_time(string nome_time); 
    void imprimir_folha_salarial_geral();
};

bool ordena_nome_time(const Time& T1, const Time& T2);


#endif