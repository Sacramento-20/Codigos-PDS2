#include "RegistroNBA.hpp"

// adiciona um novo time na coleção. Você pode assumir que os nomes dos times serão
//  únicos e formados por apenas uma palavra. 
void RegistroNBA::adicionar_time(string nome_time){
    int time_igual = 0;
    if(ARRAY_DE_TIMES.size() == 0){
        Time time(nome_time);
        ARRAY_DE_TIMES.push_back(time);
        time_igual += 1;
    }
    else{
        int tamanho = ARRAY_DE_TIMES.size();
        for (int j = 0; j < tamanho; j++){
            if(ARRAY_DE_TIMES[j]._nome_time == nome_time){
                time_igual += 1;
                break;
            }
        }
    }
    if(time_igual == 0){
        Time time(nome_time);
        ARRAY_DE_TIMES.push_back(time);
    }
}
// adiciona um novo jogador a um determinado time de acordo com os parâmetros informados.
// Atenção: se o time informado não existir na coleção, ele deve ser inserido nesse momento. 
void RegistroNBA::adicionar_jogador(string nome_time, string nome_jogador, string posicao, int salario){
    int controle = 0;
    // Primereiro Jogador
    if(ARRAY_DE_TIMES.size() == 0){
        Time time(nome_time);
        time.adicionar_jogador(nome_jogador,posicao, salario);
        ARRAY_DE_TIMES.push_back(time);
    }
    else{
        int tamanho = ARRAY_DE_TIMES.size();
        for (int j = 0; j <= tamanho; j++){
            if(ARRAY_DE_TIMES[j]._nome_time == nome_time){
                ARRAY_DE_TIMES[j].adicionar_jogador(nome_jogador,posicao, salario);
                controle += 1;
            }
        }
        if(controle == 0){
            Time time(nome_time);
            time.adicionar_jogador(nome_jogador,posicao, salario);
            ARRAY_DE_TIMES.push_back(time);
        }
    }
}    

// imprime as informações dos jogadores do time informado. 
void RegistroNBA::imprimir_lista_jogadores_time(string nome_time){
    for(iterador_times = ARRAY_DE_TIMES.begin(); iterador_times != ARRAY_DE_TIMES.end(); iterador_times++){
        if(iterador_times -> _nome_time == nome_time){
            iterador_times -> imprimir_lista_jogadores();
        }
    }
}
// imprime o valor total da folha salarial do time informado. 
void RegistroNBA::imprimir_folha_consolidada_time(string nome_time){
    for(iterador_times = ARRAY_DE_TIMES.begin(); iterador_times != ARRAY_DE_TIMES.end(); iterador_times++){
        if(iterador_times -> _nome_time == nome_time){
            iterador_times -> imprimir_folha_salarial_consolidada();
        }
    }
}
// imprime a folha salarial consolidada de todos os times registrados. 
// A impressão deve ser feita em ordem alfabética pelos nomes dos times.
void RegistroNBA::imprimir_folha_salarial_geral(){

    sort(ARRAY_DE_TIMES.begin(),ARRAY_DE_TIMES.end(), ordena_nome_time);
    for(iterador_times = ARRAY_DE_TIMES.begin(); iterador_times != ARRAY_DE_TIMES.end(); iterador_times++){
        iterador_times -> imprimir_folha_salarial_consolidada();
    }
}

bool ordena_nome_time(const Time& T1, const Time& T2){
   return T1._nome_time > T2._nome_time;
}